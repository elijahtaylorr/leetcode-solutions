class Solution(object):
    def numberOfPairs(self, nums):
        array = [0,0]
        cnt = Counter(nums)
        while(cnt.most_common(1)[0][1] > 1):
            cnt[cnt.most_common(1)[0][0]]-=2
            array[0]+= 1
        for i in cnt:
            if cnt[i] > 0:
                array[1]+= 1
        return array
