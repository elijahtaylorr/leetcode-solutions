class Solution:
    def isequal(self, c):
        c = Counter(c)
        return len(list(set(list(c.values())))) == 1

    def equalFrequency(self, word):
        for i in range(len(word)):
            if self.isequal(word[:i] + word[i + 1:]):
                return True
        return False