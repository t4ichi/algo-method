def is_palindrome(s):	
	is_ok = True
	n = len(s)
	for i in range(n):
		if s[i] != s[(n-1)-i]:
			is_ok = False
	return is_ok
	
N = int(input())
S = [input() for _ in range(N)]

ans = 0
for i in range(N):
	if is_palindrome(S[i]):
		ans += 1
print(ans)
