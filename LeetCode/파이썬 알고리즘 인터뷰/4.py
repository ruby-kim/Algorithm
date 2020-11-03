class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        """
        - 개수 확인에서는 defaultdict(int)보다 Counter를 사용
        - most_common(n): n개의 빈도수가 높은 리스트 반환. [(단어1, 개수), (단어2, 개수), ...]
        Runtime: 32 ms
        Memory: 14.1 MB
        """
        words = [word for word in re.sub('[^\w]', ' ', paragraph).lower().split() if word not in banned]        
        
        res = collections.Counter(words)
        return res.most_common(1)[0][0]
