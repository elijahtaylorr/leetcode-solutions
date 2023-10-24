class MedianFinder(object):

    def __init__(self):
        self.arr = []

    def addNum(self, num):
        bisect.insort(self.arr, num)        

    def findMedian(self):
        mid = len(self.arr)
        if (mid%2!=0):
            mid = mid/2
            midPoint = math.trunc(math.ceil(mid))
            return (self.arr[midPoint])
        else:
            mid = mid/2
            left = self.arr[mid-1]
            right = self.arr[mid]
            res = (left+right)
            res = res/2.0
            return res
        


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()