# Problem: https://codeforces.com/contest/230/problem/B
# Submission: https://codeforces.com/contest/230/submission/346041833
# Language: C++20 (GCC 13-64)
# Solved at: 2025-10-27 20:56:27

#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++)
        if (is_prime[i])
            primes.push_back(i);
    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> numbers(n);
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    vector<int> primes = sieve(1000000);

    for (long long x : numbers) {
        //  Your way: use sqrt + fractional check
        double root = sqrt((long double)x);
        long long newnumber = (long long)(root + 0.5); // rounding safeguard

        // Check both: perfect square AND prime sqrt
        if (fabs(root - newnumber) < 1e-9 && 1LL * newnumber * newnumber == x &&
            binary_search(primes.begin(), primes.end(), (int)newnumber))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
