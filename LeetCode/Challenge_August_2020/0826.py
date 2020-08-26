class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        res = []
        for num in range(1, n + 1):
            tmp = ""
            if num % 3 == 0:
                tmp += "Fizz"
            if num % 5 == 0:
                tmp += "Buzz"
            if not tmp:
                tmp = str(num)
            res.append(tmp)
        return res
