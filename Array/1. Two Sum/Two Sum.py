def twoSum(self, nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    #建立字典
    table ={nums[i] : i for i in range(len(nums))}
    results = []
    for i in range(len(nums)):
        t = target - nums[i]
        if table.get(t) is not None and (table.get(t) != i):
            results = [i, table.get(t)]
            break
    return results