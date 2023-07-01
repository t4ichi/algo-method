

N = int(input())
A = list(map(int,input().split()))

x = N // 2 - 1

def heap(v):
	for x in range(len(v)//2-1,-1,-1):
		k = x
		while True:
			left = v[2*k+1] if 2*k+1 < len(v) else 0
			right = v[2*k+2] if 2*k+2 < len(v) else 0
			
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
heap(A)
print(*A)
