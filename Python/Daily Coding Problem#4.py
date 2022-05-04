size = int(input("Enter size of an array"))
nums = []
for i in range(0, size):
    nums.append(int(input()))

for i, num in enumerate(nums):
    while 0 < nums[i] <= len(nums) and i+1 != nums[i]:
        temp = nums[nums[i]-1]
        nums[nums[i]-1] = nums[i]
        nums[i] = temp

for i, num in enumerate(nums):
    if num != i+1:
        print(i+1)
        break
