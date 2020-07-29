class Solution:
    def addDigits(self, num: int) -> int:
        """
        * map: 리스트의 요소를 지정된 함수로 처리해줌
        list(map(함수, 리스트))
        tuple(map(함수, 튜플))
        
        a = [1.2, 2.5, 3.7, 4.6]
        for i in range(len(a)):
            a[i] = int(a[i])
        
        a = list(map(int, a))
        
        둘이 같은 뜻
        """
        numList = list(str(num))
        numList = list(map(int, numList))
        
        num = sum(numList)
        if len(str(num)) > 1:
            num = self.addDigits(num)
        return num
