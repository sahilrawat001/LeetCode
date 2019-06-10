"""
Solution 2
"""
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        b = str(x)
        converNum = b[::-1]
        return converNum == b
        

"""
Solution 2
"""
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0:
            return False
        a = 0
        b = x
        while b>0:
            a =a*10+b%10
            b = b/10
        return a==x
        
        