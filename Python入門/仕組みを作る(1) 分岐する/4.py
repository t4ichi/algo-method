dist = int(input())

ans = 650
ans += 300 * dist

if(dist >= 100):
    ans -= 5000

print(ans)