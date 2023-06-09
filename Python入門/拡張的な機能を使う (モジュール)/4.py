import itertools

for a,b,c in itertools.product(range(1,21),repeat=3):
    if a**2+b**2==c**2:
        print(a,b,c)