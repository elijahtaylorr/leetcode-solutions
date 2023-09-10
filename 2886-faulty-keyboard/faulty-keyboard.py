class Solution(object):
    def finalString(self, s):
        returnStr = ""
        for char in s:
            if char == 'i':
                returnStr = returnStr[::-1]
            else:
                returnStr+= char
        return returnStr
        
