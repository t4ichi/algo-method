N = int(input())
A = list(map(int,input().split()))

cnt = [0] * 10
for i in A:
	cnt[i] += 1
for i in range(1,10):
	print(cnt[i])
