class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        for i in t:
            count = s.count(i)
            if t.count(i) != count:
                return i
