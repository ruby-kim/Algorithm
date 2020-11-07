class Solution:
    def minWindow(self, s: str, t: str) -> str:
        """ 2) 투 포인터, 슬라이딩 윈도우로 최적화
        Runtime: 116 ms
        Memory: 14.6 MB
        """
        need = collections.Counter(t)
        missing = len(t)
        left = start = end = 0
        
        for right, char in enumerate(s, 1):
            missing -= need[char] > 0
            need[char] -= 1
            
            if missing == 0:
                while left < right and need[s[left]] < 0:
                    need[s[left]] += 1
                    left += 1
                
                if not end or right - left <= end - start:
                    start, end = left, right
                    need[s[left]] += 1
                    missing += 1
                    left += 1
        return s[start : end]
