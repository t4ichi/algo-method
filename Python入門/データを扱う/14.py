poll_info = [90, 60, 240, 30, 180]

sum = 0
for i in poll_info:
    sum += i

for i in range(len(poll_info)):
    poll_info[i] = (int)(poll_info[i] / sum * 100)

print(poll_info)