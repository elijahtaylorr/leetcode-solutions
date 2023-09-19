class Solution(object):
    def isReachable(self, targetX, targetY):
        if targetX == 1 and targetY == 1:
            return True
        elif targetX % 2 == 0:
            return self.isReachable(targetX / 2, targetY)
        elif targetY % 2 == 0:
            return self.isReachable(targetX, targetY / 2)
        elif targetX > targetY:
            return self.isReachable(targetX - targetY, targetY)
        elif targetY > targetX:
            return self.isReachable(targetX, targetY - targetX)
        else:
            return False
