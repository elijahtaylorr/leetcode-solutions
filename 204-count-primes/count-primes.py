class Solution(object):
    def countPrimes(self, n):
        if n <= 2: # If n is 2 or less, there are no prime numbers less than n.
            return 0
        sieve = [True] * n  # The list will now have indices from 0 to n-1
        sieve[0], sieve[1] = False, False  # 0 and 1 are not primes
        p = 2
        while (p * p < n):  # You want primes less than n
            if sieve[p]:
                for i in range(p * p, n, p):
                    sieve[i] = False
            p += 1
        return sum(sieve)
