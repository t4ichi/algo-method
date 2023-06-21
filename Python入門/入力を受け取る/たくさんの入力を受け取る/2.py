N = int(input())

A = map(int,input().split())

ans = 1
for i in A:
	ans *= i
print(ans)
