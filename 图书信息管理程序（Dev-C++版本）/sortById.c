#include "sortById.h"

//链表根据编号排序（冒泡排序）
void sortById(Book* head) {
	//排序中没有修改头节点指针值，只是修改指针内容head->next的值
	Book* pre, * p, * tail, * temp;
	tail = NULL;
	pre = head;
	while ((head->next->next) != tail) { //(head->next)!=tail同样适用 ，多执行最后一个步比较
		p = head->next;
		pre = head;
		while (p->next != tail) {
			if ((p->id) > (p->next->id)) {
				pre->next = p->next; //交换节点方法
				temp = p->next->next;
				p->next->next = p;
				p->next = temp;
				p = pre->next;  //p回退一个节点
			}
			p = p->next;  //p再前进一个节点
			pre = pre->next;
		}
		tail = p;
	}
}
