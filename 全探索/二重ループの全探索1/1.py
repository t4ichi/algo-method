N = int(input())
A = list(map(int,input().split()))

ans = 0
for x in A:
	isprime = True
	if x == 1:
		isprime =  False
	for i in range(2,x//2+1):
		if x % i == 0:
			isprime = False
	if isprime == True:
		ans += 1
print(ans)

