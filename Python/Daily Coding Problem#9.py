def findLargestSum(arr):
    cache = [0] * (len(arr))
    for i in reversed(range(len(arr))):
        if i == len(arr) - 1:
            cache[i] = arr[i]
        elif i == len(arr) - 2:
            cache[i] = arr[i] if arr[i] > arr[i+1] else arr[i+1]
        else:
            cache[i] = max((arr[i] + cache[i+2]), cache[i+1])
    return cache[0]


size = int(input("Enter size of an array"))
print("Enter array elements")
nums = []
for i in range(0, size):
    nums.append(int(input()))

print(findLargestSum(nums))
