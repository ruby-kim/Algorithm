class Solution:
    def check_vowel(self, word: str) -> int:
        if word is 'a' or word is 'e' or word is 'i' \
            or word is 'o' or word is 'u'\
            or word is 'A' or word is 'E' or word is 'I' \
            or word is 'O' or word is 'U':
            return 1
        return 0
    
    def toGoatLatin(self, S: str) -> str:
        words = S.split()
        res = []
        for i in range(0, len(words)):
            tmp = words[i] + "ma" if self.check_vowel(words[i][0]) \
                else words[i][1:] + words[i][0] + "ma"
            if i is 0:
                tmp = words[i] + "ma" if self.check_vowel(words[i][0]) \
                else words[i][1:] + words[i][0] + "ma"
            tmp += 'a' * (i + 1)
            res.append(tmp)
        return " ".join(res)
