class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        if not matrix:
            return False
        if not len(matrix[0]):
            return False
        
        idx = -1        
        for i in range(len(matrix) - 1):
            if matrix[i][0] <= target < matrix[i + 1][0]:
                idx = i
                break
        
        start = 0
        end = len(matrix[idx]) - 1
        while start <= end:
            mid = (start + end) // 2
            if matrix[idx][mid] == target:
                return True
            elif matrix[idx][mid] < target:
                start = mid + 1
            else:
                end = mid - 1
        
        return False
