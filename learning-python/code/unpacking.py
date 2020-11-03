import math
item, date, price = ['bread', 'jan 1', 8.5]

print(item)


def unpacking(grades):
    first, *middle, last = grades
    avg = sum(middle)/len(middle)
    return avg


listx = [23, 54, 2, 46, 425, 5, 43, 34, 45, 3,
         4, 3434, 3, 43, 434, 34, 3, 43, 44, 65, 5]
print(math.floor(unpacking(listx)))
