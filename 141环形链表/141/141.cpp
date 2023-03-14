﻿
#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
bool hasCycle(ListNode *head) {
	ListNode *fast, *slow;
	fast = head;
	slow = head;
	while (fast != NULL)
	{
		fast = fast->next;
		if (fast != NULL)
			fast = fast->next;
		if (fast == slow)
			return true;
		slow = slow->next;
	}
	return false;
}
int main()
{
	ListNode *head = new ListNode(0);
	hasCycle(head);
	return 0;
}
