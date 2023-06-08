import math

class MyFraction:
    def __init__(self, num, den):
        self.num = num
        self.den = den
        self.normalize()
    def normalize(self): # 約分して分母を正にするメソッド
        if self.den < 0:
            self.num *= -1
            self.den *= -1
        g = math.gcd(self.num, self.den)
        self.num //= g
        self.den //= g
    def __str__(self): # print 関数の出力内容を定義するメソッド
        return f"{self.num}/{self.den}"
    # ここに四則演算を定義するメソッドを書いてください
    def __add__(self, other):
        res_num = self.num * other.den + self.den * other.num
        res_den = self.den * other.den
        return MyFraction(res_num, res_den)
    def __sub__(self, other):
        res_num = self.num * other.den - self.den * other.num
        res_den = self.den * other.den
        return MyFraction(res_num, res_den)
    def __mul__(self, other):
        res_num = self.num * other.num
        res_den = self.den * other.den
        return MyFraction(res_num, res_den)
    def __truediv__(self, other):
        res_num = self.num * other.den
        res_den = self.den * other.num
        return MyFraction(res_num, res_den)
    
a = MyFraction(2, 3)
b = MyFraction(1, 6)
print(f"{a} + {b} = {a + b}") # 出力: 2/3 + 1/6 = 5/6
print(f"{a} - {b} = {a - b}") # 出力: 2/3 - 1/6 = 1/2
print(f"{a} × {b} = {a * b}") # 出力: 2/3 × 1/6 = 1/9
print(f"{a} ÷ {b} = {a / b}") # 出力: 2/3 ÷ 1/6 = 4/1