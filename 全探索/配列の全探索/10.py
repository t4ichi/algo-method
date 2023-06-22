N = int(input())
A = list(map(int,input().split()))

cnt = [0] * 9
for i in A:
	cnt[i-1] += 1
ans = 0
mx = -1
for i in range(9):
	if mx < cnt[i]:
		mx = cnt[i]
		ans = i + 1
print(ans)
