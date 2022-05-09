def findMaximumRooms(time):
    prefix = [0] * 100001
    for i in range(0, len(time)):
        prefix[time[i][0]] += 1
        prefix[time[i][1] + 1] -= 1
    ans = prefix[0]
    for i in range(1, 100001):
        prefix[i] += prefix[i-1]
        ans = max(prefix[i], ans)
    return ans


size = int(input("Enter size of an array"))
time = []
print("Enter array elements rowwise:")
for i in range(0, size):
    a = []
    for i in range(0, 2):
        a.append(int(input()))
    time.append(a)

print(findMaximumRooms(time))
