N,M,K = map(int,input().split())

A = list(map(int,input().split()))
B = list(map(int,input().split()))

ans = 0
for i in A:
	for j in B:
		if i + j == K:
			ans += 1
print(ans)
