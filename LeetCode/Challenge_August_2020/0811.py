class Solution:
    def hIndex(self, citations: List[int]) -> int:
        citations.sort()
        size = len(citations)
        res = 0
        for i in range(size):
            try_citation = size - i
            if try_citation <= citations[i] and (i < 1 or citations[i - 1] <= try_citation):
                res = max(res, try_citation) 
        return res
