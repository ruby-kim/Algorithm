class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        check1 = self.case_all_capital(word)
        check2 = self.case_all_not_capital(word)
        check3 = self.case_only_first(word)
        return (check1 or check2 or check3)
    
    def case_all_capital(self, word):
        for letter in word:
            if not 'A' <= letter <= 'Z':
                return False
        return True
    
    def case_all_not_capital(self, word):
        for letter in word:
            if not 'a' <= letter <= 'z':
                return False
        return True
    
    def case_only_first(self, word):
        if 'A' <= word[0] <= 'Z':
            for letter in word[1:]:
                if not 'a' <= letter <= 'z':
                    return False
            return True
        return False
