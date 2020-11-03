# age = 27

# if (age<25):
#     print('sorry')
# elif age == 27:
#     print('damn')
# else:
#     print('too much')


def infinitex(*args):
    ix = 0
    for x in args:
        ix = ix+x
    return ix


print(infinitex(2, 124, 34, 452, 425, 42, 4,
                54, 245, 245, 245, 425, 42, 54, 525, 4))
