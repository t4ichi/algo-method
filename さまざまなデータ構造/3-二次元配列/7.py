N, X = map(int, input().split())
S = [list(input()) for _ in range(N)]

dx = [0, 1, 1, 1, 0, -1, -1, -1]
dy = [1, 1, 0, -1, -1, -1, 0, 1]

def count_life(grid,x, y):
    cnt = 0
    for i in range(8):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < N and 0 <= ny < N:
            cnt += grid[ny][nx]
    return cnt

cur = [[0 for i in range(N)] for j in range(N)]

for i in range(N):
	for j in range(N):
		if S[i][j] == '#':
			cur[i][j] = 1
for _ in range(X):
	next_step = [row[:] for row in cur]  # 新しいステップの状態を初期化
	for i in range(N):
		for j in range(N):
			x = count_life(cur,j, i)
			if cur[i][j] == 0 and x == 3:
				next_step[i][j] = 1
			elif cur[i][j] == 1 and x == 2 or x == 3:
				next_step[i][j] = 1
			elif cur[i][j] == 1 and x <= 1:
				next_step[i][j] = 0
			elif cur[i][j] == 1 and x >= 4:
				next_step[i][j] = 0
	cur = next_step

ans = ""
for i in range(N):
	for j in range(N):
		if cur[i][j] == 0:
			ans += '.'
		else:
			ans += '#'
	ans += '\n'
print(ans)
