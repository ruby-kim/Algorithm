class Solution:
    def titleToNumber(self, s: str) -> int:
        size = len(s)
        res = 0
        for i in range(size):
            res += self.calc_standard(size - i - 1) * (ord(s[i]) - 64)
        return res
        
        
    def calc_standard(self, n: int) -> int:
        res = 1
        for i in range(n):
            res *= 26
        return res
