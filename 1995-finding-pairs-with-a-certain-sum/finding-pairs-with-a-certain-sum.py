class FindSumPairs(object):

    def __init__(self, nums1, nums2):
        self.nums1 = nums1
        self.nums2 = nums2
        self.addTable = {}
        for num in nums2:
            self.addTable[num] = self.addTable.get(num, 0) + 1

    def add(self, index, val):
        self.addTable[self.nums2[index]] -= 1
        if self.addTable[self.nums2[index]] == 0:
            del self.addTable[self.nums2[index]]
        
        self.nums2[index] += val
        self.addTable[self.nums2[index]] = self.addTable.get(self.nums2[index], 0) + 1

    def count(self, tot):
        numPairs = 0
        for n1 in self.nums1:
            counterpart = tot - n1
            if counterpart in self.addTable:
                numPairs += self.addTable[counterpart]
        return numPairs
