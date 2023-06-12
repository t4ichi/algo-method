a = 3.14 # 小数点型の変数
print(id(a))
a *= 2
print(id(a))

a = True # ブーリアン型の変数
print(id(a))
a = not a
print(id(a))

a = { "aruru": "tortoise" } # 辞書型の変数
print(id(a))
a["iruru"] = "hare"
print(id(a))