class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""

        if len(strs) == 1:
            return strs[0]

        minStr = min(strs)
        maxStr = max(strs)

        result = ""
        for i in range(len(minStr)):
            if minStr[i] != maxStr[i]:
                return minStr[:i]

        return minStr