class Solution(object):
    def relativeSortArray(self, arr1, arr2):
        numMap = Counter(arr1)
        rtnList = []
        for val in arr2:
            for i in range(numMap[val]):
                rtnList.append(val)
        otherVals = []
        for val in arr1:
            if val not in rtnList:
                bisect.insort(otherVals, val)
        rtnList+= otherVals  
        return rtnList

        