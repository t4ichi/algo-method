X,Y,Z = map(int,input().split())

A = list(map(int,input().split()))
B = list(map(int,input().split()))
C = list(map(int,input().split()))

ans = 0
for i in A:
	for j in B:
		for k in C:
			if i + j == k:
				ans += 1
print(ans)
