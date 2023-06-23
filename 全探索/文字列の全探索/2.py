S = input()
S_rev = list(reversed(S))

ans = "Yes"
for i in range(len(S)):
	if S[i] != S_rev[i]:
		ans = "No"
print(ans)
