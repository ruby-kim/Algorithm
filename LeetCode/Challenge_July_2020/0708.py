class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        length = len(nums)
        nums.sort()
        res = []
        
        for i in range(0, length):
            start = i + 1
            end = length - 1
            if i > 0 and nums[i]==nums[i - 1]:
                continue
            while(start < end):
                if(start < end and nums[start] + nums[end] < -nums[i]):
                    start += 1
                elif(start < end and nums[start] + nums[end] > -nums[i]):
                    end -= 1
                else:
                    res.append([nums[start], nums[end], nums[i]])
                    
                    while(start < end and nums[start] == nums[start + 1]):
                        start += 1
                    while(start<end and nums[end] == nums[end-1]):
                        end -= 1
                    
                    start += 1
                    end -= 1
        return res
