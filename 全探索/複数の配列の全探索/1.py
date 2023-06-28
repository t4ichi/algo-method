N,M = map(int,input().split())

A = list(map(int,input().split()))
B = list(map(int,input().split()))

ans = 0
for i in range(len(A)):
	for j in range(len(B)):
		if A[i] > B[j]:
			ans += 1
print(ans)
