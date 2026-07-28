class Solution:
    def searchMatrix(self, mat: List[List[int]], target: int) -> bool:
        m = len(mat)
        n = len(mat[0])
        l, h = 0, m * n - 1
        
        while l <= h:
            mid = l + (h - l) // 2
            row = mid // n
            col = mid % n
            if mat[row][col] == target:
                return True
            elif mat[row][col] < target:
                l = mid + 1
            else:
                h = mid - 1
        
        return False
