N = int(input())
S = [""] * N

cnt_right = 0
cnt_left = 0

for i in range(N):
	S[i] = input()
	if S[i] == "right":
		cnt_right += 1
	elif S[i] == "left":
		cnt_left += 1
if cnt_right > cnt_left:
	print("right")
elif cnt_right < cnt_left:
	print("left")
else:
	print("same")
