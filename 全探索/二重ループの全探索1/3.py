L,R = map(int,input().split())

ans = 0
for i in range(L,R+1):
	s = str(i)
	ns = list(reversed(s))
	is_ok = True
	for j in range(len(s)):
		if s[j] != ns[j]:
			is_ok = False
	if is_ok == True:
		ans += 1
print(ans)
