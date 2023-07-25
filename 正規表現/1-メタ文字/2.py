import re

S = input()

reg = r'^metho.*od$'

search = re.search(reg,S)
if search:
	print("Yes")
else:
	print("No")
