// 234.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *Create()
{
	ListNode *head = (ListNode*)malloc(sizeof(ListNode));
	head->next = NULL;
	ListNode *p = (ListNode*)malloc(sizeof(ListNode));
	p = head;
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		ListNode *s = (ListNode*)malloc(sizeof(ListNode));
		cin >> s->val;
		p->next = s;
		s->next = NULL;
		p = s;
	}
	return head;
}
void output(ListNode *head)
{
	ListNode *p = head;
	p = head->next;
	while (p)
	{
		cout << p->val << " ";
		p = p->next;
	}

}
void outputV(vector<int> res)
{
	for (int i = 0;i < res.size();i++)
		cout << res[i] << " ";

}
bool isPalindrome(ListNode* head) {
	ListNode *p = head;
	vector<int> res;
	p = head->next;
	while (p != NULL)
	{
		res.emplace_back(p->val);
		p = p->next;
	}
	//outputV(res);
	int i = 0, j = res.size() - 1;
	for (;i < j;i++, j--)
	{
		if (res[i] != res[j])
			return false;

	}
	return true;

}
int main()
{
	ListNode *head;
	head=Create();
	//output(head);
	if (isPalindrome(head)==true)
		cout << "True";
	else
		cout << "false";
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

//尾插法建立链表：
//#include <stdio.h>
//#include <stdlib.h>//里面包含了malloc函数
//struct LinkList//创建结构体
//{
//	int data;//数据域，用来保存数据。
//	struct LinkList* next;//指针域，用来连接其他结点。
//};
//int main(void)
//{
//	struct LinkList* head = (struct LinkList*)malloc(sizeof(struct LinkList));//创建头结点，并分配内存，需要的内存大小就是结构体的大小。别忘了在malloc前进行强制类型转换。（struct LinkList*）
//	head->next = NULL;//头结点指针初始化
//	struct LinkList* p;//创建p结点 p结点在尾插法中用于记录链表尾结点，将来插入结点的时候只需要向p结点后插入即可。
//	p = head;//p结点指针赋值为头结点
//	for (int i = 0; i < n; i++)//循环创建结点
//	{
//		struct LinkList* s = (struct LinkList*)malloc(sizeof(struct LinkList));//创建s结点，并分配内存
//		scanf("%d", &s->data);//给s结点赋值。
//		//尾插法建立链表
//		p->next = s;//因为插完第一个结点后用p保存了上一个结点，所以再插结点时应该插在p节点后面，这就是尾插。
//		s->next = NULL;//别忘了让插在尾部的s结点的指针指向NULL。
//		p = s;//p结点保存刚才的s结点；以保证p始终为链表的最后一个节点
//	}//至此，链表的创建已经完成了。
//	return 0;
//至此完成了链表的遍历输出。
