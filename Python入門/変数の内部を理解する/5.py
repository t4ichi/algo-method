class Tortoise:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def aging(self):
        self.age += 1

# Tortoise のインスタンス
aruru = Tortoise("aruru", 5)
id_before = id(aruru)
aruru.aging()
id_after = id(aruru)

# ここに aging メソッドを呼ぶ前後の id が同じかどうかを出力するコードを書いてください
print(id_before == id_after)