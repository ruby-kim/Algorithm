class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        freq = dict(collections.Counter(nums))
        
        res = list()
        for key, value in freq.items():
            if value == 1:
                res.append(key)
        return res
