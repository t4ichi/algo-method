N,V = map(int,input().split())
A = list(map(int,input().split()))

ans = -1
for i in range(N):
	if A[i] == V:
		ans = i
print(ans)
