from math import gcd
class Solution:
    def findGCD(self, nums: List[int]) -> int:
        maxi = 0
        mini = 1001
        for x in nums:
            maxi = max(maxi,x)
            mini = min(mini,x)
        return gcd(maxi,mini)
        