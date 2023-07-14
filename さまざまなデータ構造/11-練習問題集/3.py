N = int(input())
A = list(map(int,input().split()))
cnt = {}
for x in A:
	cnt[x] = cnt.get(x,0) + 1

ans = 0
for v,nv in cnt.items():
	if nv < v:
		ans += nv
	else:
		ans += (nv - v)
print(ans)
