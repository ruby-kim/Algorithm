class Solution:
    """ 3) 슬라이싱 이용
        Runtime: 36ms
        Memory: 15.4 MB
    """
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s = re.sub('[^a-z0-9]', '', s)  # regex
        return s == s[::-1]             # slicing
