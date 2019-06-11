def isMatch(self, s, p):
    """
    :type s: str
    :type p: str
    :rtype: bool
    """
    len_s = len(s)
    len_p = len(p)
    dp = [[False for i in range(len_p + 1)] for j in range(len_s + 1)]
    dp[0][0] = True
    for i in range(1, len_p + 1):
        dp[0][i] = i > 1 and dp[0][i - 2] and p[i - 1] == '*'
    for i in range(1, len_s + 1):
        for j in range(1, len_p + 1):
            if p[j - 1] == '*':
                # 状态保留
                dp[i][j] = dp[i][j - 2] or (s[i - 1] == p[j - 2] or p[j - 2] == '.') and dp[i - 1][j]
            else:
                dp[i][j] = (p[j - 1] == '.' or s[i - 1] == p[j - 1]) and dp[i - 1][j - 1]
    return dp[len_s][len_p]