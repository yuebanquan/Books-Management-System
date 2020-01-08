#include "Insert.h"

//插入节点模块（可多个插入）
void insert(Book *head) {
	system("cls");

	//如果链表不为空，开始插入
	if (head) {
		int flag = 1;	//flag实现判断指针是否到达最后一个节点

		Book* p, * q, * r;	//定义指针便于插入操作
		printf("请输入书本的信息,按-1结束（格式：编号 书名 作者 库存量 价格）\n");

		int id;	//输入的编号
		scanf_s("%d", &id);

		while (id != -1) {	//输入-1结束
			r = (Book*)malloc(sizeof(Book));	//r指针开辟空间
			r->next = NULL;	//置空r的指针域
			r->id = id;
			scanf("%s %s %d %f", r->name, r->author, &r->inventory, &r->price);

			q = head;//q指针记录头节点的地址
			p = head->next;//p指针记录头节点的指针域的地址
			while (q->next != NULL && p->id < r->id) { //循环条件：当q->next不为空,以及按图书编号排序插入
				p = p->next;//p指针后移
				q = q->next;//q指针后移
				if (q->next == NULL) { //这个判断防止q->next为空时，在执行循环是出现野指针使程序出错
					p = NULL;//防止出现野指针p
					q->next = r;//连接节点
					r->next = NULL;//置空r指针域
					flag = 0;//到达最后一个节点更改flag
					break;
				}
			}
			if (flag) { //判断是否到达最后一个节点，为真执行该操作
				r->next = p;
				q->next = r;
				//实现将r节点插入链表
			}
			printf("请输入书本的信息,按-1结束（格式：编号 书名 作者 库存量 价格）\n");
			scanf_s("%d", &id);
		}
	}
	//如果链表为空
	else {
		printf("还未创建图书链表，请创建链表后再插入!\n");
		//使页面停留在当前页
		printf("输入任意键返回......");
		getch();
	}
	

}
