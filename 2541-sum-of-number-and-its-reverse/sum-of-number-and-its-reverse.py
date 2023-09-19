class Solution(object):
    def sumOfNumberAndReverse(self, num):
        if num == 0: return True
        for i in range(num):
            num2 = int(str(i)[::-1])
            if i+num2 == num:
                return True
        return False
        