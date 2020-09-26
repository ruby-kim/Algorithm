class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        freq = len(nums) / 3
        uniq = list(set(nums))
        res = []
        
        for elem in uniq:
            if nums.count(elem) > freq:
                res.append(elem)
        return res
