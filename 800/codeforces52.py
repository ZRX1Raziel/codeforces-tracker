n, k, l, c, d, p, nl, np = map(int, input().split())

kl=k*l
np=p//np
dc=d*c


no_of_toasts= (min(kl//nl,dc,np))//n

print(no_of_toasts)