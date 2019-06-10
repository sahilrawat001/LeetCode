class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x >= 0:
            s = (int)(str(x)[::-1])  
        else:
            s = -(int)(str(-x)[::-1])
        if s >= -(2**31) and s <= (2**31)-1:
            return s
        else:
            return 0