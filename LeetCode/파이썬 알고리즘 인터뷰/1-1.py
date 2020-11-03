class Solution:
    """ 1) 직접 list로 풀이
        Runtime: 284ms
        Memory: 19.5 MB
    """
    def isPalindrome(self, s: str) -> bool:
        res = []
        for char in s:
            if char.isalnum():
                res.append(char.lower())
        
        while len(res) > 1:
            if res.pop(0) != res.pop():
                return False
        return True
