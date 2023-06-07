x = float("-3.0")
print(x.is_integer())

a = [3, 1, 4, 1, 5, 9]
b = list()
while len(a) > 0:
    b.append(a[-1])
    a.pop()
print(b[1])

prices = dict({ "apple": 100, "orange": 70, "banana": 80 })
if "banana" in prices.keys():
    print(prices.get("banana"))
else:
    print("Not found")