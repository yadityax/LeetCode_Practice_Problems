class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        self.hour=hour
        self.minutes=minutes
        a=abs(30*self.hour-5.5*self.minutes)
        if a>180:
            a=360-a
        return a
        