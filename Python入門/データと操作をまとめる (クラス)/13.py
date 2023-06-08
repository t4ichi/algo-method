class Character:
    def __init__(self, name, hp, strength):
        self.name = name
        self.hp = hp
        self.strength = strength

    def attack(self, other):
        # ここに attack メソッドを書いてください
        if self.hp <= 0:
            return
        else:
            other.hp -= self.strength
            other.hp = max(0, other.hp)
            
# Character クラスのインスタンス aruru と iruru
aruru = Character("aruru", 60, 40)
iruru = Character("iruru", 70, 25)

print(f"{aruru.name}: {aruru.hp}, {iruru.name}: {iruru.hp}") # HP を出力
for i in range(2): # 2 回交互に攻撃する
    # aruru が iruru に攻撃する
    aruru.attack(iruru)
    print(f"{aruru.name}の攻撃！")
    print(f"{aruru.name}: {aruru.hp}, {iruru.name}: {iruru.hp}")
    # iruru が aruru に攻撃する
    iruru.attack(aruru)
    print(f"{iruru.name}の攻撃！")
    print(f"{aruru.name}: {aruru.hp}, {iruru.name}: {iruru.hp}")
