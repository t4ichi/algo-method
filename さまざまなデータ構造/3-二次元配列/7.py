N, X = map(int, input().split())
S = [list(input()) for _ in range(N)]

dx = [0, 1, 1, 1, 0, -1, -1, -1]
dy = [1, 1, 0, -1, -1, -1, 0, 1]

def count_life(x, y):
    cnt = 0
    for i in range(8):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < N and 0 <= ny < N and S[ny][nx] == '#':
            cnt += 1
    return cnt

cur = [row[:] for row in S]  # 初期化

for _ in range(X):
    next_step = [row[:] for row in cur]  # 新しいステップの状態を初期化
    for i in range(N):
        for j in range(N):
            x = count_life(j, i)
            if cur[i][j] == '.' and x == 3:
                next_step[i][j] = '#'
            elif cur[i][j] == '#' and (x <= 1 or x >= 4):
                next_step[i][j] = '.'
    cur = next_step  # 状態を更新

for row in cur:
    print(''.join(row))
