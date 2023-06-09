import datetime # datetime モジュールを読み込む

# 2123 年 3 月 28 日を表す変数
d = datetime.date(2123, 3, 28)

if(d.weekday() == 6):
    print("Yes")
else:
    print("No")
