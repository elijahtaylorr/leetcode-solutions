class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        counter = collections.Counter(ransomNote)
        for letter in magazine:
            if letter in counter:
                counter[letter] -= 1
        return len(list(counter.elements())) <= 0