dir = input()

typedstring = input()

refstring ='qwertyuiopasdfghjkl;zxcvbnm,./'

actualinput=""

if dir == 'R':
    for char in typedstring:
        for i in range(len(refstring)):
            if char==refstring[i]:
                actualinput+=refstring[i-1]
            
else:
    for char in typedstring:
        for i in range(len(refstring)):
            if char==refstring[i]:
                actualinput+=refstring[i+1]

print(actualinput)