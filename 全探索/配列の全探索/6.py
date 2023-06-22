N = int(input())
A = list(map(int,input().split()))

ans = -1
for i in A:
	ans = max(ans,i)
print(ans)
