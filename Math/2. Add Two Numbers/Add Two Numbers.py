# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        result = ListNode(-1)
        aux = result
        carry = 0
        while (l1 or l2 or carry):
            a = l1 and l1.val or 0
            b = l2 and l2.val or 0
            sum = a + b + carry
            carry = sum / 10
            aux.next = ListNode(sum % 10)
            aux = aux.next
            if (l1):
                l1 = l1.next
            if (l2):
                l2 = l2.next

        return result.next
