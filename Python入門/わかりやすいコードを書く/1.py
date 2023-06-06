prime = [2, 3, 5, 7]
def is_prime(n):
    for i in prime:
        if n == i:
            return True
    return False

n = int(input())

if is_prime(n):
    print("Yes")
else:
    print("No")