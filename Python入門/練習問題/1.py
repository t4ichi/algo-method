S = input()

ans = ""
a = ["a","i","u","e","o"]
for i in range(len(S)):
    if (S[i].islower() and S[i] not in a):
        ans += "_"
    else:
        ans += S[i]
print(ans)