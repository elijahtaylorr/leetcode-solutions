class Solution(object):
    def largestOddNumber(self, num):
        for ind in range(len(num)-1,-1,-1):
            if(int(num[ind])%2 != 0):
                return num[0:ind+1]
        return ""
        