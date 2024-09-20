sum = 0
count = 0
with open("C:/Python/sample.txt", 'r') as f:
    lines = f.readlines()
    for line in lines:
        sum += int(line)
        count += 1

with open("C:/Python/result.txt", 'w') as f:
    f.write("총합 : %d\n평균값 : %d" %(sum, sum/count))

        