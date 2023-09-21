class Solution(object):
    def repeatedCharacter(self, s):
        chars = Counter()
        for char in s:
            chars[char] += 1
            if chars[char] >= 2:
                return char