class Solution(object):
    def isSameAfterReversals(self, num):
        return(num < 10 or num%10 != 0)