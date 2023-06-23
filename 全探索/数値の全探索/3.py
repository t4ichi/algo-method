N = int(input())

if N == 1:
	print("No")
else:
	ans = "Yes"
	for i in range(2,N):
        	if N % i == 0:
                	ans = "No"
	print(ans)
