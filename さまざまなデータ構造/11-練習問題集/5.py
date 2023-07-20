N,M = map(int,input().split())
A = list(map(int,input().split()))

ans = 0
cnt = [0 for _ in range(200001)]

for a in A:
	cnt[a] += 1

for i in range(0,M//2 + 1,1):
	if i == M - i:
		ans += cnt[i] * (cnt[i] - 1)  // 2
	else:
		ans += cnt[i] * cnt[M-i]
print(ans)
