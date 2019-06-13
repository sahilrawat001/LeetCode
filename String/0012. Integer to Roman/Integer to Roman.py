def intToRoman(self, num):
    """
    :type num: int
    :rtype: str
    """
    intList = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
    strList = ['M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']
    resStr = ''
    i = 0
    count = 0
    while num > 0:
        count = num / intList[i]
        num %= intList[i]
        while count > 0:
            resStr += strList[i]
            count -= 1
        i += 1
    return resStr