class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        str = str.strip()
        try:
            res = int(re.search('(^[\+\-]?\d+)', str).group())
        except:
            res = 0
        return min(max(-2147483648, res), 2147483647)