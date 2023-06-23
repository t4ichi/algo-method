A,B = map(int,input().split())

ans = 0
for x in range(1,A+1):
	if A % x == 0 and B % x == 0:
		ans = x
print(ans)
