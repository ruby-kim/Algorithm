hour, min = map(int, input().split())
cook = int(input())

min += cook
while min >= 60:
    min -= 60
    hour += 1
    if hour >= 24:
        hour -= 24
        
print(hour, min)