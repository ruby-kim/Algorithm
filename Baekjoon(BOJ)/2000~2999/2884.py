hour, min = map(int, input().split())

min = min - 45
if min < 0:
    min += 60
    hour -= 1
    if hour < 0:
        hour += 24

print(hour, min)