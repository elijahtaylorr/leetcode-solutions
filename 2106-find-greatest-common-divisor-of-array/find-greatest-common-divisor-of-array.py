class Solution(object):
    def gcd(self,a, b):
        if(b == 0):
            return abs(a)
        else:
            return self.gcd(b, a % b)
    def findGCD(self, nums):
        return self.gcd(min(nums),max(nums))