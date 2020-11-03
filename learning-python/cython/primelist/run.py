import primelist
import primelistcy
import timeit


cy = timeit.timeit('''primelist.SieveOfEratosthenes(70009)''',
                   setup='import primelist', number=100)
print("Cy done ::: " + str(cy))
py = timeit.timeit('''primelistcy.SieveOfEratosthenes(70009)''',
                   setup='import primelistcy', number=100)
print("Py done ::: " + str(py))


print('Cython is {}x faster'.format(py/cy))
