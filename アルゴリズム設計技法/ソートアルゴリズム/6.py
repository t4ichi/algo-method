from collections import deque

def merge_sort(A):
	if len(A) == 0:
		return

	X = len(A) // 2
	L = A[:X]
	R = A[X:]
	
	if len(L) >= 2:
		L  = merge_sort(L)
	if len(R) >= 2:
		R = merge_sort(R)
	
	dq = deque()
	for i in L:
		dq.append(i)
	for i in reversed(R):
		dq.append(i)
	
	B = []
	while len(dq):
		if dq[0] <= dq[-1]:
			B.append(dq.popleft())
		else:
			B.append(dq.pop())
	return B
			
N = int(input())
A = list(map(int,input().split()))

A = merge_sort(A)
print(*A)
