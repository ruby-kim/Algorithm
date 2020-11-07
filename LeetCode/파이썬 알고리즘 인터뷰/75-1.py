class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        """ 1) 브루트 포스로 계산: Time Limit Exceeded
        Runtime: N/A
        Memory: N/A
        """
        if not nums:
            return nums
        return [max(nums[i : i + k]) for i in range(len(nums) - k + 1)]
