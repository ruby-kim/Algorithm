class Solution:
    def search(self, l, t, k):
        po = 0
        while po < len(l):
            i = po + 1
            while i < len(l):
                if abs(l[i][0] - l[po][0]) <= t and abs(l[i][1] - l[po][1]) <= k:
                    return True
                else:
                    if abs(l[i][0] - l[po][0]) > t:
                        break
                    else:
                        i +=1
            po += 1
        return False

    def containsNearbyAlmostDuplicate(self, nums: List[int], k: int, t: int) -> bool:
        pp = sorted(zip(nums, range(len(nums))), key= lambda x:x[0])
        return self.search(pp, t, k)
