class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        if len(timeSeries) == 0:
            return 0
        
        res = 0
        n = len(timeSeries)
        for i in range(1, n):
            diff = timeSeries[i] - timeSeries[i - 1]
            if diff < duration:
                res += diff
            else:
                res += duration
        return res + duration        
        
