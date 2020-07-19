class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        angle_part = 30             # 360 / 12
        angle_per_part = 0.5        # 30 / 60
        angle_min_part = 6          # 360 / 60(min)
        
        if hour == 12:
            hour = 0
        
        angle_hour = angle_part * hour + angle_per_part * minutes
        angle_min = angle_min_part * minutes
        
        res = 0
        if angle_hour > angle_min:
            res = angle_hour - angle_min
        else:
            res = angle_min - angle_hour
        
        if res > 180:
            return 360 - res
        return res
