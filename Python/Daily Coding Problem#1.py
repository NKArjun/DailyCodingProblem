size = int(input("Enter size of an array"))
list = []

for i in range(0, size):
    list.append(int(input()))

k = int(input("Enter a value sum value"))

seen = set()
flag = 0
for val in list:
    if k - val in seen:
        flag = 1
        break
    seen.add(val)

if flag == 1:
    print(True)
else:
    print(False)
