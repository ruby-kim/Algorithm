class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        """
        dictionary: key-hash table 자료형
        
        Runtime: 92 ms
        Memory: 17.2 MB
        """
        
        anagrams = collections.defaultdict(list)
        
        for word in strs:
            anagrams[''.join(sorted(word))].append(word)
        return anagrams.values()
