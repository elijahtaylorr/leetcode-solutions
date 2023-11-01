class Solution(object):
    def numOfStrings(self, patterns, word):
        totalCount = 0
        for pattern in patterns:
            if pattern in word:
                totalCount+= 1
        return totalCount
        