
fo = open("openfile.txt","w+")
fo.write(f"Name of file : {fo.name}")
print("Closed or not :", fo.closed)
print("Opening mode : ", fo.mode)
str = "\nthis is another line"
fo.write(str)
fo.close()
