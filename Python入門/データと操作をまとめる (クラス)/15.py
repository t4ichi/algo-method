# 分数を管理するクラス
class MyFraction:
    def __init__(self, num, den):
        self.num = num # 分子
        self.den = den # 分母
    # ここに print 関数での出力内容を定義するコードを書いてください
    def __str__(self):
        return f"{self.num}/{self.den}"
a = MyFraction(3, 4)
print(a) # "3/4" が出力されるようにする
