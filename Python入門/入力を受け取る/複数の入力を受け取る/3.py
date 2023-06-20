A,B = map(int,input().split())

a =A % 10
b =B % 10

if a < b:
	print(A)
else:
	print(B)

