#Sieve of Erathosthenes
def sieve(numbers):
    is_prime=[True]*(numbers+1)
    is_prime[0]=False
    is_prime[1]=False
    for i in range(2,int(numbers**0.5)+1):
        if is_prime[i]:
            for j in range(i*i,numbers+1,i):
                is_prime[j]=False
    return [i for i,prime in enumerate(is_prime) if prime]


n=int(input())

primes=sieve(n)

count=0
for x in range(1,n+1):
    prime_divisors=0
    for p in primes:
        if p>x:
            break
        if x%p==0:
            prime_divisors+=1
        if prime_divisors>2:
            break
    if prime_divisors==2:
        count+=1

print(count)

