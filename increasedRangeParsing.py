def order(nums):
    nums = list(map(int, nums))
    for i in range(1, len(nums)):
        while nums[i] <= nums[i-1]:
            nums[i] += 10
    return list(map(str, nums))


def addRanges(nums):
    newNums = []
    for n in nums:
        rngIndex = n.find('-')
        if rngIndex != -1:
            newNums + [i for i in range(rngIndex - 1, rngIndex + 2)]
        else:
            newNums + [n]
    return newNums

def rangeParsing(nums):
    # split nums into a list of strings
    nums = list(map(str, nums.split(',')))
    # order the list of numbers correctly
    nums = addRanges(nums)
    nums = order(nums)


    return nums

inp = []
while True:
    try:
        inp.append(input())
    except EOFError:
        break

separators = ["-", ":", ".."]

[print(rangeParsing(i)) for i in inp]
