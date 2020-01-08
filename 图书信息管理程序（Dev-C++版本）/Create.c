#include"Create.h"

Book* create(Book *head) {
	system("cls");			//清空屏幕
	if (!head) {	//如果不存在链表，创建链表
		Book* p, * q;	//定义指针
		head = (Book*)malloc(sizeof(Book));	//从头节点开辟空间
		head->next = NULL;	//置空头节点的指针域
		q = head;			//q指针记录头节点的地址
		p = head->next;	//p指针记录头节点的指针域的地址

		printf("请输入书本的信息,按-1结束（格式：编号 书名 作者 库存量 价格）\n");
		int id;	//输入的编号
		scanf_s("%d", &id);

		while (id != -1) {
			p = (Book*)malloc(sizeof(Book));	//p指针开辟空间
			//输入各成员
			p->id = id;
			scanf("%s %s %d %f", p->name, p->author, &p->inventory, &p->price);
			p->next = NULL;	//置空p节点的指针域
			q->next = p;	//p，q节点连接
			q = p;			//q指针后移
			printf("请输入书本的信息，按-1结束（格式：编号 书名 作者 库存量 价格）\n");
			scanf_s("%d", &id);
		}
	}
	else {	//如果存在链表，返回错误信息
		printf("已存在图书链表，请勿重复创建!\n");
		//使页面停留在当前页
		printf("输入任意键返回......");
		getch();
	}

	return head;	//返回链表的起始位置
}
