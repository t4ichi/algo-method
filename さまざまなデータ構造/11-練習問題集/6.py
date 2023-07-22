N,M = map(int,input().split())
A = list(map(int,input().split()))

cnt = [0 for _ in range(M)]
for a in A:
	i = a % M
	cnt[i] += 1

ans = 0
for i in range(M):
	j = cnt[i]
	ans += j * (j - 1) // 2
print(ans)
