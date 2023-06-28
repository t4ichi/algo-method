L,R = map(int,input().split())

ans = 0
for i in range(L,R+1):
	for j in range(i+1,R+1):
		if i % 10 == j % 10:
			ans += 1
print(ans)
