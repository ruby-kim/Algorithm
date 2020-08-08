class Solution:
    def isPowerOfFour(self, num: int) -> bool:
        if num <= 4:
            if num == 1 or num == 4:
                return 1
            return 0
        
        binum = bin(num)[2:]
        freq = dict(collections.Counter(binum))
        if len(freq) == 2 and (freq['1'] != 1 or binum[-1] != '0'):
            return 0
        if len(freq) == 1 and freq['1'] != 1:
            return 0
        if freq['0'] % 2 == 0:
            return 1
        return 0
