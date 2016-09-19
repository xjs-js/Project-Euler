# Problem 12
# https://projecteuler.net/problem=12

# my ugly solution

# calculate the sum of 1 to n, triangle numbers
f = lambda n: n*(n+1)/2

def main():
    sum_factors = 0
    n = 1
    while sum_factors < 500:
        sum_factors = 0
        triangle_num = f(n)

        middle = int(triangle_num ** 0.5)
        for i in range(1, middle+1):
            if triangle_num % i == 0:
                sum_factors += 2

        if middle**2 == triangle_num:
            sum_factors -= 1

        n += 1
    else:
        print triangle_num



# overview solution

# Sieve of Eratosthenes
def primes(n):
    primes = []
    sieve = [1] * (n+1) # all set primes
    sieve[1] = 0
    for i in range(2, n+1):
        j = i
        if sieve[i] == 1:
            primes.append(i)
        j += i
        while j <= n:
            sieve[j] = 0
            j += i

    return primes

prime = primes(65500)

def D(n):
    result = 1
    index = 0
    while n > 1:
        elm = prime[index]
        cnt = 0
        while n % elm == 0:
            cnt += 1
            n = n/elm
        index += 1
        result = result*(cnt+1)

    return result

def main2():
    factors = 0
    n = 1
    while factors < 500:
        if n%2 == 0:
            factors = D(n/2) * D(n+1)
        else:
            factors = D((n+1)/2) * D(n)
        n += 1
    else:
        n -= 1
        print n*(n+1)/2

if __name__ == '__main__':
    main2()  #76576500