S = input()

ans = ""
for c in S:
    if c == 'a':
        ans += 'b'
    elif c == 'b':
        ans += 'c'
    elif c == 'c':
        ans += 'a'
print(ans)