class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        
        if numRows == 1:
            return s
        
        rows = [""]*numRows
        
        cycle = 2*numRows - 2
        result = ""
        
        level = 0 #层数
        aux = -1
        for i in s:
            rows[level] += i
            if(level == 0 or level == numRows -1):
                aux *= -1
            level += aux
        
        for i in rows:
            result += i
                    
        return result  