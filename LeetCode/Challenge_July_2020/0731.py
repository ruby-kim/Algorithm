from functools import lru_cache
"""
memoization: 프로그래밍 분야에서 동적 계획법의 핵심 기술
             이전에 계산한 값들을 메모리에 저장함으로써, 동일 계산의 반복 수행을 제거
             프로그램의 실행 속도를 빠르게 만들어줌.
             
             동일한 input에 동일한 output이 나오는 함수지만 실행비용이 비싼 경우 적용함
"""

class Solution:
    
    @lru_cache
    def climbStairs(self, n: int) -> int:
        if n < 4:
            return n
        return self.climbStairs(n - 1) + self.climbStairs(n - 2)
