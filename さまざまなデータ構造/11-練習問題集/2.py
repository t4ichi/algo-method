N = int(input())
A = list(map(int,input().split()))

A.sort()
ans = "Yes"
for i in range(N):
	if i+1 != A[i]:
		ans = "No"
		break
print(ans)
