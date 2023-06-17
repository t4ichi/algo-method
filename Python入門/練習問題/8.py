S = input()

st = set()
for i in range(len(S)-2):
    st.add(S[i:i+3])

print(len(st))