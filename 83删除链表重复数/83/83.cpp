// 83.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 
};

	ListNode* deleteDuplicates(ListNode* head) 
	{
		if (!head)
			return head;
		ListNode *p = head;
		while (p->next != NULL)
		{
			if (p->val == p->next->val)//删除这个数
				p->next = p->next->next;
			else
				p = p->next;
		}
		return head;
	}
	ListNode *create(ListNode *head)
	{
		ListNode *p = head;
		p = p->next;
		ListNode *p;
		p->val = 1;
		p = p->next;
		p->val = 1;
		p = p->next;
		p->val = 2;
		p->next = NULL;
		return head;

	}
	void output(ListNode *head)
	{
		ListNode *p = head;
		while (p->next!=NULL)
		{
			cout << p->val;
			p = p->next;
		}
	}
int main()
{
	ListNode *h=new ListNode(0);
	create(h);//有问题
	deleteDuplicates(h);
	output(h);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
