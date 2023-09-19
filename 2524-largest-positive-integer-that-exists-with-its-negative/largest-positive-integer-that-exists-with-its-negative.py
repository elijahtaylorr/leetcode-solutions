class Solution(object):
    def findMaxK(self, nums):
        hash = {}
        largestValue = -1001
        for num in nums:
            hash[num] = True
            if (num*-1 in hash) and largestValue < abs(num):
                largestValue = abs(num)
        if largestValue != -1001:
            return largestValue
        return -1
