class Solution(object):
    def numSpecial(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: int
        """
        rows = len(mat)
        columns = len(mat[0])
        special = 0

        for rowNum in range(rows):
            for colNum in range(columns):
                if mat[rowNum][colNum] == 1:
                    if sum(mat[rowNum]) == 1 and sum(row[colNum] for row in mat) == 1:
                        special += 1

        return special
