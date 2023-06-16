S = input()

ans = ""
a = [""]
for i in range(len(S)):
    if(S[i] not in a):
        ans += S[i]
        a.append(S[i])
    else:
        ans += "*"
print(ans)