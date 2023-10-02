class Solution(object):
    def kthSmallest(self, matrix, k):
        full = []
        for row in matrix:
            full.extend(row)
        full.sort()
        return full[k-1]