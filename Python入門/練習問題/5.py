for i in range(8):
    S = ""
    for j in range(8):
        if((i + j) % 2):
            S += "#"
        else:
            S += "."
    print(S)
