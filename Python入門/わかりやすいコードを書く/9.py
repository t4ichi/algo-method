S = input()

a = [0] * 5

for vote in S:
    x = int(vote)
    a[x-1] += 1

for i in range(5):
    print(a[i],end=" ")
print()