H,W = map(int,input().split())
S = [input() for _ in range(H)]

ans = 0
for i in range(H):
	for c in S[i]:
		if c == 'o':
			ans += 1
print(ans)
