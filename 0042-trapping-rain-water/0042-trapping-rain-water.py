class Solution:
    def trap(self, height: List[int]) -> int:
        hmax, water = 0, 0
        left, right = [], []

        for h in height:
            hmax = max(hmax, h)
            left.append(hmax)

        hmax = 0

        for h in reversed(height):
            hmax = max(hmax, h)
            right.append(hmax)

        right.reverse()

        for h, l, r in zip(height, left, right):
            water += min(l, r) - h

        return water