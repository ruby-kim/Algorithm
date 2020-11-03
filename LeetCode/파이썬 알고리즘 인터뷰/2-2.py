class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        
        """ 2) 파이썬 다운 방식
        s = s[::-1]이 안되는 이유:
            space complexity가 O(1)로 설정됨
            변수 할당을 처리하는데 제약이 생기기 때문
        
        이럴 경우에는 s[:]를 사용하자.
        ===
        s.reverse()
        Runtime: 196 ms
        Memory: 18.5 MB
        
        s[:] = s[::-1]
        Runtime: 188 ms
        Memory: 18.7 MB
        """
        s.reverse()
        # s[:] = s[::-1]
