S = input()
T = input()

cnt = 0
for i in range(8):
    if(S[i] == T[i]):
        cnt += 1
if(cnt >= 4):
    print("Bad")
else:
    print("Good")
