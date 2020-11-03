family = {'d1': 'lol',
          's1': 'servant',
          's2': 'king',
          'm1': 'speaker',
          'course': ['math','speaker']
          }

family.update({'phone':'100'})

print(family)
print(family['course'][0])
print(family.get('m1'))
print(family.get('course'))

for m,n in family.items():
    print(m,n)
