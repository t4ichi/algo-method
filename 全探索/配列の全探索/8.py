N = int(input())
A = list(map(int,input().split()))

ans = 100
for i in A:
	ans = min(ans,i)
print(ans)
