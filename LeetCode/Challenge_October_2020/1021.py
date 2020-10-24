class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        if len(asteroids) < 2:
            return asteroids
        
        stack = []
        for splanet in asteroids:
            while stack and stack[-1] > 0 and splanet < 0:
                if stack[-1] + splanet < 0:      # 2, -3
                    stack.pop()
                elif stack[-1] + splanet > 0:    # 5, -2
                        break
                else:
                    stack.pop()                 # 5, -5
                    break
            else:
                stack.append(splanet)
        return stack
