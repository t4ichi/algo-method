S = input()

def f(s):
    ans = ""
    for c in s:
        if c == 'a':
            ans += 'b'
        elif c == 'b':
            ans += 'c'
        elif c == 'c':
            ans += 'a'
    return ans

print(f(S))
print(f(f(S)))
print(f(f(f(S))))
