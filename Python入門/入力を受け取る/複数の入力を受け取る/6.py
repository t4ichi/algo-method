a = map(int,input().split())

ans = 0

for i in a:
	ans = max(ans,i)

print(ans)
