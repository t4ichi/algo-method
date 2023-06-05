S = input()

ans = ""
for c in S:
    if c == 'o':
        ans += 'x'
    elif c == 'x':
        ans += 'o'
print(ans)