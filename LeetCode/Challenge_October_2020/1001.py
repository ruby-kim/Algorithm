class RecentCounter:
    def __init__(self):
        self.elems = []

    def ping(self, t: int) -> int:
        self.elems.append(t)
        start = 0
        end = len(self.elems)
        
        while start < end:
            mid = int((start + end) / 2)
            if self.elems[mid] >= (self.elems[-1] - 3000):
                end = mid
            else:
                start = mid + 1

        return len(self.elems) - start
    
# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)
