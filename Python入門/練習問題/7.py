S = input()

dict = {"zero":"0","one":"1","two":"2","three":"3","four":"4","five":"5","six":"6","seven":"7","eight":"8","nine":"9"}

ans = ""
cur = ""
for c in S:
    cur += c
    if(cur in dict):
        ans += dict[cur]
        cur = ""
print(ans)