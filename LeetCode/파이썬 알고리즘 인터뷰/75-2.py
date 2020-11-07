class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        """ 2) 큐를 이용한 최적화: 책 예시. 하지만 Time Limit Exceeded 발생
        Runtime: N/A
        Memory: N/A
        """
        window = collections.deque()
        cur_max = float('-inf')
        res = []
        
        for idx, val in enumerate(nums):
            window.append(val)
            
            if idx < k - 1:
                continue
            else:
                if cur_max == float('-inf'):
                    cur_max = max(window)
                elif val > cur_max:
                    cur_max = val
                res.append(cur_max)
                
                if cur_max == window.popleft():
                    cur_max = float('-inf')
        
        return res


# Accepted 된 코드
class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        """ 2) 큐를 이용한 최적화: 데크 이용(책의 코드를 향상시킴)
        Runtime: 1328 ms
        Memory: 30.1 MB
        """
        
        # 예제: [1, 3, 2, 5, 8, 7]
        
        idx_store = collections.deque()
        res = []
        
        for idx, val in enumerate(nums):
            # 효율적인 max처리를 위한 방법
            # val이 nums[idx_store에 저장된 값들]보다 크다면 기존꺼 전부 빼버림
            # 이로써 가장 큰 값은 idx_store[0]에 항상 위치하게 됨
            # 참고로 val이 작다면 idx_store에 차례대로 쌓임
            while idx_store and nums[idx_store[-1]] <= val:
                idx_store.pop()
            idx_store.append(idx)
            
            # 만약의 사태를 위해, idx_store에 k개 이상의 값이 저장될 경우
            # idx_store에 k개 이상 있음 = window의 범위 초과
            # 따라서 가장 오래된 값을 삭제
            if idx_store[0] == idx - k:
                idx_store.popleft()
            
            # idx가 0부터 시작하므로 k개의 개수에서 가장 큰 것을 보러면 idx 기준으로 0 ~ k - 1임
            # 그 중 가장 앞의 값이 가장 큰 값이기 때문에 해당 값을 result로 선정
            if idx >= k - 1:
                res.append(nums[idx_store[0]])
                
        return res
