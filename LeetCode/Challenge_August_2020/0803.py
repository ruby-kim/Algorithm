class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        import re
        regex = re.compile('[^a-zA-Z0-9]')
        only_alpha = regex.sub('', s).lower()
        
        slen = len(only_alpha)
        flag = slen // 2
        print(slen, flag)
        for i in range(flag):
            if only_alpha[i] != only_alpha[slen - 1 - i]:
                return 0
        return 1
