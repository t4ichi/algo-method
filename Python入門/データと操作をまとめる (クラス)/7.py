class Tortoise:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    # ここに __str__ メソッドを書いてください
    def __str__(self):
        return f"name: {self.name}, age: {self.age}"
    
aruru = Tortoise("aruru", 5)
print(aruru)
