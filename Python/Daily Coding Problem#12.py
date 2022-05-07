def countWays(num, climbList):
    cache = [0] * (num+1)
    cache[0] = 1
    for i in range(1, num+1):
        cache[i] = 0
        for j in range(0, len(climbList)):
            if i-climbList[j] >= 0:
                cache[i] = cache[i] + cache[i - climbList[j]]
    return cache[num]


num = int(input("Enter a number"))
size = int(input("Enter size of an array"))
climbList = []
print("Enter list of elements")
for i in range(0, size):
    climbList.append(int(input()))

print(countWays(num, climbList))
