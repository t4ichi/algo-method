H,W = map(int,input().split())
S = [input() for _ in range(H)]

cnt1 = 0
cnt2 = 0

for i in range(H):
	for j in range(W):
		# 左上が#の場合
		if (i+j) % 2 == 0:
			if S[i][j] != '#':
				cnt1 += 1
		else:
			if S[i][j] != '.':
				cnt1 += 1
for i in range(H):
	for j in range(W):
		# 左上が.の場合
		if (i+j) % 2 == 0:
			if S[i][j] != '.':
				cnt2 += 1
		else:
			if S[i][j] != '#':
				cnt2 += 1
print(min(cnt1,cnt2))

