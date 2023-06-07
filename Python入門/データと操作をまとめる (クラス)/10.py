class Tortoise:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def thank(self, name): # name (文字列) に対して感謝する
        print(f"{name}、ありがとう！")

class TortoiseEnglish(Tortoise): # Tortoise クラスを継承するクラス
    # ここに thank メソッドの動作を変更するコードを書いてください
    def thank(self, name):
        print(f"Thank you, {name}!")
iruru = TortoiseEnglish("iruru", 16)
iruru.thank("arere")
