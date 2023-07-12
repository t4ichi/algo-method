H,W = map(int,input().split())
S =[""] * H
for i in range(H):
	S[i] = input()

dx = [0,1,0,-1]
dy = [1,0,-1,0]

Q = int(input())
for _ in range(Q):
	X,Y = map(int,input().split())
	cnt = 0
	for i in range(4):
		nx = X + dx[i]
		ny = Y + dy[i]
		if nx < 0 or nx >= H or ny < 0 or ny >= W:
			continue
		if S[nx][ny] == '#':
			cnt += 1
	print(cnt)
