class Solution:
    def minWindow(self, s: str, t: str) -> str:
        """ 1) 브루트 포스로 탐색: Time Limit Exceeded
        Runtime: N/A
        Memory: N/A
        """
        def contains(s_substr_list: List, t_list: List):
            for t_elem in t_list:
                if t_elem in s_substr_list:
                    s_substr_list.remove(t_elem)
                else:
                    return False
            return True
        
        if not s or not t:
            return ''
        
        window_size = len(t)
        for size in range(window_size, len(s) + 1):
            for left in range((len(s) - size + 1)):
                s_substr = s[left : left + size]
                if contains(list(s_substr), list(t)):
                    return s_substr
        return ''
