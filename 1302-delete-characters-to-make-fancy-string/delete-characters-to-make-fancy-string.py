class Solution(object):
    def makeFancyString(self, s):
        result = []
        lastletter = ""
        lastletterCount = 0

        for letter in s:
            if letter == lastletter:
                lastletterCount += 1
            else:
                lastletterCount = 1

            if lastletterCount <= 2:
                result.append(letter)

            lastletter = letter

        return "".join(result)