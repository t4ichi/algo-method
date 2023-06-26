N,K = map(int,input().split())

ans = 0
for i in range(1,N+1):
	cnt = 0
	for j in range(1,i+1):
		if i % j == 0:
			cnt += 1
	if cnt == K:
		ans += 1
print(ans)
