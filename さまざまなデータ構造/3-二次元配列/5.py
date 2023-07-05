H,W = map(int,input().split())
S = [input() for _ in range(H)]
Q = int(input())

DX = [0,1,0,-1]
DY = [1,0,-1,0]

for _ in range(Q):
	X,Y = map(int,input().split())
	cnt = 0
	for i in range(4):
		x = X + DX[i]
		y = Y + DY[i]
		if x < 0 or x >= H:
			continue
		if y < 0 or y >= W:
			continue
		if S[x][y] == '#':
			cnt += 1
	print(cnt)
