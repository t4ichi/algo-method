N,V = map(int,input().split())
A = list(map(int,input().split()))

ans = 0
for i in A:
	if i == V:
		ans += 1
print(ans)
