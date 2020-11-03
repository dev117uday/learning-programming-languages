import prime_no
import prime_no_cy
import timeit


cy = timeit.timeit('''prime_no.findprime(56921)''',
                   setup='import prime_no', number=100)
print("Cy done")
py = timeit.timeit('''prime_no_cy.findprime(56921)''',
                   setup='import prime_no_cy', number=100)
print("Py done")


print('Cython is {}x faster'.format(py/cy))
