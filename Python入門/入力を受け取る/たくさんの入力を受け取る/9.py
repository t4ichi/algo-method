N = int(input())
S = [""] * N

ans = ""
for i in range(N):
	S[i] = input()
	ans += S[i][0]
print(ans)
