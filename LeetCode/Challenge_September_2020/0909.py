class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        ver1 = [int(i) for i in version1.split('.')]
        ver2 = [int(i) for i in version2.split('.')]
        len1 = len(ver1)
        len2 = len(ver2)
        
        if len1 < len2:
            ver1 += [0] * (len2 - len1)
        elif len1 > len2:
            ver2 += [0] * (len1 - len2)
        
        for v1, v2 in zip(ver1, ver2):
            if v1 > v2:
                return 1
            elif v1 < v2:
                return -1
        return 0
