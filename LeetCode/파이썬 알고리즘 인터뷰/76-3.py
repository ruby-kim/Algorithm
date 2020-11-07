class Solution:
    def minWindow(self, s: str, t: str) -> str:
        """ 3) Counter로 좀 더 편리한 풀이
        Runtime: 1860 ms
        Memory: 14.6 MB
        """
        t_cnt = collections.Counter(t)
        cur_cnt = collections.Counter()
        
        start = float('-inf')
        end = float('inf')
        
        left = 0
        for right, char in enumerate(s, 1):
            cur_cnt[char] += 1
            
            while cur_cnt & t_cnt == t_cnt:
                if right - left < end - start:
                    start, end = left, right
                cur_cnt[s[left]] -= 1
                left += 1
        return s[start : end] if end - start <= len(s) else ''
