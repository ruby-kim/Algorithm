year = int(input())
flag = 0

if year % 4 == 0:
    if year % 100 != 0 or year % 400 == 0:
        print("1")
        flag = 1
        
if not flag:
    print("0")