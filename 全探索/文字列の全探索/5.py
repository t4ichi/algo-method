S = input()
T = input()

ans = "No"
N = len(S) - len(T)
for i in range(N+1):
	if T == S[i:i+len(T)]:
		ans = "Yes"
print(ans)	
