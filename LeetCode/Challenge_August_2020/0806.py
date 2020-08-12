class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        size = len(nums)
        passIdx = 0
        res = list()
        
        nums.sort()
        for i in range(size - 1):
            if i + passIdx >= size - 1:
                break
            if nums[i + passIdx] == nums[i + passIdx + 1]:
                res.append(nums[i + passIdx])
                passIdx += 1
        return res
