from sys import exit

list = [1,2,3,4,5] 
it = iter(list)

while True:
    try:
        print(next(it))
    except StopIteration:
        exit()

# print(next(it))
# print(next(it))
# print(next(it))
# print(next(it))
# print(next(it))
#print(next(it)) error


print("#list")
for x in list:
    print(x, end=" ")
print("\n#list")

print("#it")
for x in it:
    print(x,  end=" ")
print("#it")
