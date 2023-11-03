class Solution(object):
    def countCharacters(self, words, chars):
        countChrs = Counter(chars)
        goodWords = []
        
        for word in words:
            wordCounter = Counter(word)
            wordGood = True
            for letter in wordCounter:
                if wordCounter[letter] > countChrs[letter]:
                    wordGood = False
                    break
            if wordGood:
                goodWords.append(word)
        
        finalSum = sum(len(goodWord) for goodWord in goodWords)
        return finalSum
