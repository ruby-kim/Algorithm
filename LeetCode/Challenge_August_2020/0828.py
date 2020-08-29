# The rand7() API is already defined for you.
# def rand7():
# @return a random integer in the range 1 to 7

class Solution:
    def rand10(self):
        """
        :rtype: int
        """
        # [1,5] [6,10] 두 부분으로 / 7개의 값을 10개의 값에 매핑하기
        val1, val2 = rand7(), rand7()
		
		# val1 : {1,2,3,4,5,6,7} : {6,7}은 무시: [1,5] 동일 확률 보장
        while val1 > 5: val1 = rand7()
		
		# val2: {1,2,3,4,5,6,7} : [1,3] -> [1,5] / [4,6] -> [6,10]
		# {7} 무시: 확률 보장
        while val2 == 7: val2 = rand7()
		
        return val1 if val2 <= 3 else val1 + 5
        
