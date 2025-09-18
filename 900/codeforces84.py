
import sys

# It's a good practice to increase the recursion limit for problems involving
# deep recursion, like traversing a tree or a graph.
# The maximum number of employees is 2000, so a chain of command could be this long.
sys.setrecursionlimit(2050)

def solve():
    """
    Solves the Party problem by finding the height of the management hierarchy forest.
    """
    try:
        # Read the number of employees
        n = int(sys.stdin.readline())

        # children[i] will store a list of direct reports for employee i
        # We use n+1 size for 1-based indexing to match the problem statement
        children = [[] for _ in range(n + 1)]
        
        # roots will store employees with no manager
        roots = []

        # Read the manager for each employee and build the tree structure
        for employee_id in range(1, n + 1):
            manager_id = int(sys.stdin.readline())
            
            if manager_id == -1:
                # This employee is a root
                roots.append(employee_id)
            else:
                # Add this employee to their manager's list of children
                children[manager_id].append(employee_id)

    except (IOError, ValueError):
        # Handle potential empty input or incorrect format
        print(0)
        return

    def get_height(node):
        """
        Recursively calculates the height of the subtree rooted at 'node' using DFS.
        The height is defined as the number of nodes on the longest path from the
        node to a leaf.
        """
        # Base case: If a node has no children, it's a leaf. The path length is 1.
        if not children[node]:
            return 1
        
        # Recursive step: The height of this subtree is 1 (for the current node)
        # plus the maximum height of any of its children's subtrees.
        max_child_height = 0
        for child in children[node]:
            max_child_height = max(max_child_height, get_height(child))
            
        return 1 + max_child_height

    # The minimum number of groups is the height of the tallest tree in the forest.
    # We find this by calculating the height of each tree (starting from each root)
    # and taking the maximum.
    max_overall_height = 0
    for root in roots:
        max_overall_height = max(max_overall_height, get_height(root))
        
    print(max_overall_height)

# Run the solution
solve()