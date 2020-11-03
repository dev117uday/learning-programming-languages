
def findprime(int n):

    cdef int i = 2
    while i < (n/2):
        if (n % i) == 0:
            exit()
        else:
            i = i + 1
    else:
        pass