import copy # copy モジュールを読み込む

a = [3, 1, 4, 1, 5]       # リスト型変数
a_shallow = a             # a を参照渡しした変数
a_deep = copy.deepcopy(a) # a を値渡しした変数

# ここに a, a_shallow と a, a_deep の id が同じかどうかを出力するコードを書いてください
print(id(a_shallow) == id(a))
print(id(a_deep) == id(a))