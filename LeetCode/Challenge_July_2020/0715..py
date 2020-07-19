class Solution:
    def reverseWords(self, s: str) -> str:
        # 1. split string on the base of space
        origin_list = s.split()
        
        # 2. reverse list
        reversed_list = list(reversed(origin_list))
        
        # 3. make string by placing spaces between the words in the list
        res = ' '.join(reversed_list)
        
        return res
