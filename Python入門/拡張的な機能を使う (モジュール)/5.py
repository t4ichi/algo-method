from collections import defaultdict

# 各有権者が投票した立候補者の名前
votes = ["aruru", "iruru", "ururu", "aruru", "eruru", "oruru", "aruru", "iruru", "aruru", "eruru", "iruru", "ururu", "eruru"]

d = defaultdict(int) # int() は 0 を返す関数
for vote in votes: # 投票された立候補者に 1 を足す
    d[vote] += 1

# 投票結果を出力
for name, value in d.items():
    print(f"{name} {value}")
