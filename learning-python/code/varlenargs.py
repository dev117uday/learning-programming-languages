
def printinfo(arg,*vartuple):
    print ("Output this : " + str(arg))
    for x in vartuple:
        print(x,end="\n")

printinfo(10)
printinfo(10,20,30,40)