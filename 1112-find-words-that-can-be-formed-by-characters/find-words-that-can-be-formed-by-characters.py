class Solution(object):
    def countCharacters(self, words, chars):
        countChrs = Counter(chars)
        goodWords = []
        for word in words:
            wordGood = True
            for letter in word:
                if (countChrs[letter] <= 0):
                    wordGood = False
                countChrs[letter]-= 1
            if wordGood:
                goodWords.append(word)
            countChrs = Counter(chars)
        finalSum = 0
        for goodWord in goodWords:
            finalSum+= len(goodWord)
        return finalSum

                