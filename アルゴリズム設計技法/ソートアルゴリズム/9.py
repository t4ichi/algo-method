N = int(input())
A = list(map(int,input().split()))

X = N + 1
num = [0] * X
for a in A:
	num[a] += 1
acc = [0] * X
for i,cnt in enumerate(num):
	if i == 0:
		acc[i] = cnt
	else:
		acc[i] = acc[i-1] + cnt
B = [0] * N
for a in A:
	acc[a] -= 1
	B[acc[a]] = a

print(*B)
