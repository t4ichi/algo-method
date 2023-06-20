S = input()
N,M = map(int,input().split())

S_list = list(S)
c = S[N-1]
S_list[N-1] = S[M-1]
S_list[M-1] = c
print("".join(S_list))
