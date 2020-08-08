class MyHashSet:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.val = [False] * 1000000
        

    def add(self, key: int) -> None:
        self.val[key] = True
        

    def remove(self, key: int) -> None:
        self.val[key] = False

    def contains(self, key: int) -> bool:
        """
        Returns true if this set contains the specified element
        """
        return self.val[key]
        


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)
