# prime number function


def findprime(n):

    i = 2
    while i < (n/2):
        if (n % i) == 0:
            #print(str(n) + " is not a prime")
            exit()
        else:
            i = i + 1
    else:
        #print(str(n)+" is a prime ")
        pass
