class Solution:
    def bitwiseComplement(self, N: int) -> int:
        tmp = str(bin(N)[2:])
        res = ""
        for elem in tmp:
            res += '0' if elem == '1' else '1'
        return int(res, 2)
        
