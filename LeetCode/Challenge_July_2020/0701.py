class Solution(object):
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
        sum = 0
        i = 1
        while True:
            if sum + i > n:
                return i - 1
            sum = sum + i
            i = i + 1
