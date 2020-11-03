import int_return
import s_int_return
import timeit


cy = timeit.timeit('''int_return.test(1000000)''',
                   setup='import int_return', number=10)
print("Cy done")
py = timeit.timeit('''s_int_return.test(1000000)''',
                   setup='import s_int_return', number=10)
print("Py done")


print('Cython is {}x faster'.format(py/cy))
