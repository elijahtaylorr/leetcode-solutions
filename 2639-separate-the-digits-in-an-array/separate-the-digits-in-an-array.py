class Solution(object):
    def separateDigits(self, nums):
        sepArray = []
        for number in nums:
            miniArr = list(str(number))
            for i in range(len(miniArr)):
                sepArray.append(int(miniArr[i]))
        return sepArray