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

        """
        :type mat: List[List[int]]
        :rtype: int
        """
        columns = len(mat)
        rows = len(mat[0])
        special = 0
        for colNum in range(rows):
            isSpecial = False
            for rowNum in range(columns):
                cell = mat[rowNum][colNum]
                if cell == 1 and not isSpecial:
                    isSpecial = True
                elif cell == 1 and isSpecial:
                    isSpecial = False
                    break
            if isSpecial:
                for checkColumns in range(columns):
                    colCell = mat[rowNum][checkColumns]
                special+= 1
        return special

