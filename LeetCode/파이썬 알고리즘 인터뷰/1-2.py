class Solution:
    """ 2) deque를 이용한 최적화
        Runtime: 48ms
        Memory: 19.1 MB
    """
    def isPalindrome(self, s: str) -> bool:
        res: Deque = collections.deque()
            
        for char in s:
            if char.isalnum():
                res.append(char.lower())
        
        while len(res) > 1:
            if res.popleft() != res.pop():
                return False
        return True
