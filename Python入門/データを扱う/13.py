S = input()

def f(s):
    ans = ""
    for c in s:
        nc =  chr(ord(c) - 1)
        if(nc < 'a'):
            nc = chr(ord(nc) + 26)
        ans += nc
    return ans

print(f(f(f(S))))
