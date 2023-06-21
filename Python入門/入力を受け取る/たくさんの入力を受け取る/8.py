N = int(input())
S = [""] * N
ans = 0
for i in range(N):
	S[i] = input()
	ans += len(S[i])
print(ans)
