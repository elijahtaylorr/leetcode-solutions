class Solution(object):
    def vowelStrings(self, words, queries):
        def isVowel(ch):
            return ch in 'aeiou'

        prefix_sum = [0] * len(words)
        for i in range(len(words)):
            if isVowel(words[i][0]) and isVowel(words[i][-1]):
                prefix_sum[i] = 1
                
        for i in range(1, len(words)):
            prefix_sum[i] += prefix_sum[i-1]
        
        ans = []
        for li, ri in queries:
            if li == 0:
                ans.append(prefix_sum[ri])
            else:
                ans.append(prefix_sum[ri] - prefix_sum[li-1])
        
        return ans