import itertools

for i in itertools.permutations(["A","B","C","D"],4):
	ans = ""
	for j in i:
		ans += j
	print(ans)

