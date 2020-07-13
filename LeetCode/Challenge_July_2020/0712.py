class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        """
        1) Decimal to Binary num: bin()
           n1 = 5
           n1 = bin(5)      # '0b101'
        2) [Random] to Decimal num: int()
           n2 = 102         # 3 (tetra num)     
           n2 = int(n2, 3)  # 11
        3) '{0:[num]b}'.format(N): print N, entire number of digits is [num]
        """
        return int('{0:032b}'.format(n)[::-1], 2)
