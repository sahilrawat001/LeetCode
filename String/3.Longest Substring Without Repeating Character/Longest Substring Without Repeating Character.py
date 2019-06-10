class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        table = { }
        left = -1
        result = 0
        for i in range(len(s)):
            if (s[i] in table) and table[s[i]] > left:
                left = table[s[i]]
            
            table[s[i]] = i
            result = max(result, i - left)
            
        return result