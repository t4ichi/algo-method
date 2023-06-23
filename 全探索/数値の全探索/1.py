N = int(input())

ans = 0
A = [2,3,5]
for i in range(1,N+1):
	ok = True
	for j in A:
		if i % j == 0:
			ok = False
	if ok == True:
		ans += 1
print(ans)
