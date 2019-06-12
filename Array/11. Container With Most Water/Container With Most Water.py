def maxArea(self, height):
    """
    :type height: List[int]
    :rtype: int
    """
    pBegin = 0
    pEnd = len(height) - 1
    resInt = 0
    while pBegin < pEnd:
        curArea = (pEnd - pBegin) * min(height[pBegin], height[pEnd])
        if curArea > resInt:
            resInt = curArea
        if height[pBegin] < height[pEnd]:
            pBegin += 1
        else:
            pEnd -= 1
    return resInt