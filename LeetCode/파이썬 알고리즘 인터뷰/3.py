class Solution:
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        """
        Runtime: 36 ms
        Memory: 14 MB
        """
        letters, digits = [], []
        
        for log in logs:
            digits.append(log) if log.split()[1].isdigit() else letters.append(log)
        
        
        # 식별자를 제외한 문자열 [1:]을 키로 하여 정렬
        # 동일한 경우 후순위로 식별자[0]을 지정해 정렬되도록
        letters.sort(key=lambda x: (x.split()[1:], x.split()[0]))
        
        
        return letters + digits
