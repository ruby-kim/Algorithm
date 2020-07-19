class Solution:
    def myPow(self, x: float, n: int) -> float:
        res = pow(x, n)
        
        if res > pow(2, 31) - 1:
            res = pow(2, 31) - 1
        elif res < pow(2, 31) * -1:
            res = pow(2, 31) * -1
        
        return res
