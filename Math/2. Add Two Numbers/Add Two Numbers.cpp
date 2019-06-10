/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode* result = new ListNode(-1);
		ListNode* aux = result; //辅助，用来处理中间链表
		int carry = 0;
		while (l1 != nullptr || l2 != nullptr || carry != 0){

			int a = l1 ? l1->val : 0; //判断链表当前是否为空，如果为空，则值为0
			int b = l2 ? l2->val : 0;
			int sum = a + b + carry;
			carry = sum / 10; //进位用取模来获得
			aux->next = new ListNode(sum % 10); //通过取模消除进位的影响
			aux = aux->next;
			if (l1)
				l1 = l1->next;
			if (l2)
				l2 = l2->next;
		}

		return result->next;
	}
};