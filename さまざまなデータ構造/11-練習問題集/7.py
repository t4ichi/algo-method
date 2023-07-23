N = int(input())

d_win = {}
d_lose = {}
for i in range(N-1):
	S,a,tmp,b,T = input().split()
	a = int(a)
	b = int(b)
	if a < b:
		a,b = b,a
		S,T = T,S
	d_win[S] = 0
	d_lose[T] = 1

d_win.update(d_lose)
for name,lose in d_win.items():#負けた回数が0回の人が答え
	if lose == 0:
		print(name)
