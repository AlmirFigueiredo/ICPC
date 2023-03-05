maxValue = current = 100
for i in range(0, int(input())):
    current += int(input())
    maxValue = max(current, maxValue)
print(maxValue)
