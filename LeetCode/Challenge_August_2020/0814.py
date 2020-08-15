class Solution:
    def longestPalindrome(self, s: str) -> int:
        if len(set(s)) == 1:
            if len(s) == 1:
                return 1
            return len(s)
        
        res = 0
        odd = 0
        freq = collections.Counter(sorted(s))
        for i in freq.values():
            if i % 2 == 1 and i > 2:
                res += 2 * (i // 2)
                odd = 1
            elif i % 2 == 1:
                odd = 1
            else:
                res += i
        if odd:
            return res + 1
        return res
