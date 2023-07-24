import re

S = input()

reg = r'algo'
search = re.search(reg,S)

if search:
	print("Yes")
else:
	print("No")
