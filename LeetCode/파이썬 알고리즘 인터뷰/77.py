class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        """ 3) 투 포인터, 슬라이딩 윈도우, Counter를 모두 이용
        Runtime: 300 ms
        Memory: 14.2 MB
        """
        left = right = 0
        cnt = collections.Counter()
        
        for right in range(1, len(s) + 1):
            cnt[s[right - 1]] += 1
            max_char_n = cnt.most_common(1)[0][1]
            
            if right - left - max_char_n > k:
                cnt[s[left]] -= 1
                left += 1
        
        return right - left 
