# ここに Character クラスを書いてください
class Character:
    def __init__(self,name,hp,strength):
        self.name = name
        self.hp = hp
        self.strength = strength

aruru = Character("aruru", 50, 20)
print(f"name: {aruru.name}, hp: {aruru.hp}, strength: {aruru.strength}")