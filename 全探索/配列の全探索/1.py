N,V = map(int,input().split())
A = list(map(int,input().split()))
ans = "No"
for i in A:
	if i == V:
		ans = "Yes"
print(ans)
