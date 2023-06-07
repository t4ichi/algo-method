# カメ (Tortoise) クラスの定義
class Tortoise:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def introduce(self):
        print(f"{self.name} は {self.age} 歳です。")
    # ここに aging 関数を書いてください
    def aging(self):
        self.age += 1

aruru = Tortoise("aruru", 5)
aruru.introduce() # 名前と年齢を出力する
aruru.aging()     # 年齢を 1 増やす
aruru.introduce() # 名前と年齢を出力する
