

while True:
    try:
        variable = int(input('enter your favourite number : '))
        print('your favorite number is : ', variable)
        break
    except ValueError:
        print('your are an idiot\nTry again')

while True:
    try:
        number = int(input('enter the number : '))
        print('your answer is :' + str(18/number))
    except ZeroDivisionError:
        print('cannot enter zero')
    finally:
        print('Loop complete')
        exit()
