N = int(input())
A = list(map(int,input().split()))

ans = 0
for i in A:
	if i > 0:
		ans += 1
print(ans)
