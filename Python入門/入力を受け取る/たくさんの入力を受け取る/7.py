N = int(input())
A = map(int,input().split())

ans = 1000
for i in A:
	ans = min(ans,i)
print(ans)
