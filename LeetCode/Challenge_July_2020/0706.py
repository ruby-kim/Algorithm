class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        
        """
        list A,
        * reverse:  A.reverse()      # return None
        * reversed: reversed(A)      # return 'reversed' object
        """
        num = 0
        for i in digits:
            num = num * 10 + i
        num += 1
        
        result = []
        while (num != 0):
            result.append(num % 10)
            num /= 10
        
        return reversed(result)
