#include "mod.h"

//修改节点模块
void mod(Book* head) {
	system("cls");
	//如果链表不为空，开始修改
	if (head) {
		Book* p;	//定义指针
		int id1, id2, inventory1;	//定义num1用于输入查找书籍修改信息,num2用于修改
		char name1[50], author1[20];
		float price1;
		printf("请输入要修改的图书编号：");
		//输入要修改的图书编号
		scanf_s("%d", &id1);
		p = head->next;
		while (p != NULL) {
			if (p->id == id1) {		//判断是否找到书籍
				printf("请输入书本的信息（格式：编号 书名 作者 库存量 价格）\n");
				//为真时，重输图书信息
				scanf("%d %s %s %d %f", &id2, name1, author1, &inventory1, &price1);
				p->id = id2;
				strcpy(p->name, name1);
				strcpy(p->author, author1);
				p->inventory = inventory1;
				p->price = price1;
				break;
			}
			else {
				//为假时
				p = p->next;//指针后移
			}
		}
		if (p == NULL) {//查找到最后一个节点还未查到要的编号时，输出错误信息
			printf("未查找到该图书编号\n");
			//使页面停留在当前页
			printf("输入任意键返回......");
			getch();
		}
	}
	else {
		printf("还未创建图书链表，请创建链表后再修改!\n");
		//使页面停留在当前页
		printf("输入任意键返回......");
		getch();
	}

}
