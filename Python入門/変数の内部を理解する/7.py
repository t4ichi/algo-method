a = [[0, 0, 0]] * 2
a[0][0] = 1
print(a)
print(a[1][0])

a = [[0] * 3 for i in range(2)]
a[0][0] = 1
print(a)
print(a[1][0])

a = [[0 for i in range(3)]] * 2
a[0][0] = 1
print(a)
print(a[1][0])

a = [dict()] * 3
a[0]["aruru"] = 0
a[1]["aruru"] = 1
a[2]["aruru"] = 2
print(a)
print(a[0]["aruru"])
