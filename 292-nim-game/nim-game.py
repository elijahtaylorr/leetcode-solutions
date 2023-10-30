class Solution(object):
    def canWinNim(self, n):
        if n <= 2:
            return True
        elif n > 2 and n%4==0:
            return False
        else:
            return True