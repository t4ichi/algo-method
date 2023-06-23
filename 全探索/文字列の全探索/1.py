S = input()
c = input()

ans = "No"
for i in range(len(S)):
	if S[i] == c:
		ans = "Yes"
print(ans)
