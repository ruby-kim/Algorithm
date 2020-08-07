class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        freq = collections.Counter(tasks)
        max_freq = max(freq.values())
        freq = list(freq.values())
        
        last_elem = 0
        for i in range(len(freq)):
            if freq[i] == max_freq:
                last_elem += 1
        ans = (max_freq - 1) * (n + 1) + last_elem
        
        return max(ans, len(tasks))
