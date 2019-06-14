def romanToInt(self, s):
    """
    :type s: str
    :rtype: int
    """
    table = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    resInt = 0
    i = 0
    while i < len(s):
        if i > 0 and table[s[i]] > table[s[i - 1]]:
            resInt += table[s[i]] - 2 * table[s[i - 1]]
        else:
            resInt += table[s[i]]
        i += 1
    return resInt