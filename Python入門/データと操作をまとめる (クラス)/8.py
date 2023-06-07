class Pair:
    def __init__(self, first, second):
        self.first = first
        self.second = second
    def __str__(self):
        return f"({self.first}, {self.second})"
    def __add__(self, other):
        return Pair(self.first + other.first, self.second + other.second)
    # ここに __sub__ メソッドを書いてください
    def __sub__(self, other):
        return Pair(self.first - other.first, self.second - other.second)
a = Pair(2, 3)
b = Pair(1, 5)
print(a - b)