# 標準入力から値を受け取る
# num: int 型
num = int(input())

# 果物の名をキーとし、対応する値段を値とする辞書型の変数
fruits_dict = {
    "apple": 120, "banana": 100, "peach": 150, "lemon": 90,
    "grape": 140, "orange": 80, "melon": 200, "pineapple": 160,
}

# ここにコードを書いてください
ans = "empty"
max = 0

for fruit,val in fruits_dict.items():
	if num < val:
		continue
	if max < val:
		max = val
		ans = fruit
print(ans)

