N = int(input())
A = list(map(int,input().split()))

mx = -1
ans = 0
for i in range(N):
	if mx < A[i]:
		mx = A[i]
		ans = i
print(ans)
