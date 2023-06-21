N = int(input())
A = map(int,input().split())

sum = 0
for i in A:
	sum += i
print(sum//N)
