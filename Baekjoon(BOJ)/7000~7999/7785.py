T = int(input())

record = {}
for i in range(T):
    person, action = map(str, input().split())
    record[person] = action 

names = []
for key, val in record.items():
    if val == 'enter':
        names.append(key)

names.sort(reverse = True)
for i in names:
    print(i)