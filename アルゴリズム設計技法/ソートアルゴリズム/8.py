N,M= map(int,input().split())
A = list(map(int,input().split()))

def alien_elements(v,start_pos,end_pos):
	k = start_pos
	while True:
		left = 0
		right = 0
		if 2*k+1 < end_pos:
			left = v[2*k+1]
		if 2*k+2 < end_pos:
			right = v[2*k+2]

		if left == 0 and right == 0:
			break
		elif v[k] >= left and v[k] >= right:
			break
		elif left >= right:
			v[k],v[2*k+1] = v[2*k+1],v[k]
			k = 2*k+1
		else:
			v[k],v[2*k+2] = v[2*k+2],v[k]
			k = 2*k+2

def build_heap(v):
	for x in range(len(v)//2-1,-1,-1):
		alien_elements(v,x,len(v))

def delete_root(v,end_pos):
	v[0],v[end_pos] = v[end_pos],v[0]
	alien_elements(v,0,end_pos)

build_heap(A)

for i in range(N-1,0,-1):
	delete_root(A,i)
	if i == M:
		print(*A)
print(*A)
