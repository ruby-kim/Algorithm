word=input()
russ={"B":"v","E":"ye","H":"n","P":"r","C":"s","Y":"u","X":"h"}
res=""
for i in word:
    if i in russ:
        res+=russ[i]
    else:
        res+=i.lower()
print(res)