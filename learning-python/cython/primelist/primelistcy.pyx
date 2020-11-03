cpdef list SieveOfEratosthenes(int n):
    cdef int i = 0
    cdef list prime = [1 for i in range(n+1)]
    cdef int p = 2
    while (p * p <= n):
        if (prime[p] == 1):
            for i in range(p * p, n+1, p):
                prime[i] = 0
        p = p + 1
    
    return prime
