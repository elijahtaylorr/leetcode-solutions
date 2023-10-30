class Solution(object):
    def nearestValidPoint(self, x, y, points):
        smallestPoint = (10001,40001) #(index,distance)
        pointInd = -1
        for point in points:
            pointInd+= 1
            pointX = point[0]
            pointY = point[1]
            if pointX != x and pointY != y:
                continue
            mDist = abs(x - pointX) + abs(y - pointY)
            if mDist <= smallestPoint[1]:
                if mDist == smallestPoint[1] and pointInd < smallestPoint[0]:
                    smallestPoint = (pointInd,mDist)
                elif mDist < smallestPoint[1]:
                    smallestPoint = (pointInd,mDist)
        if smallestPoint == (10001,40001):
            return -1
        else:
            return smallestPoint[0]