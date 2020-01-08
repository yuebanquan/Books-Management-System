#include"PrintBook.h"

//输出链表函数
void printBook(Book *head) {
	system("cls");		// 清屏
	//如果链表不为空，显示信息
	if (head) {
		Book* p = head->next;
		printf("编号\t书名\t作者\t数量\t价格\n");
		while (p) { //当p不为空的时候执行
			printf("%d\t%s\t%s\t%d\t%.2f\n", p->id, p->name, p->author, p->inventory, p->price);
			printf("\n");
			p = p->next;//指针后移
		}
	}
	//如果为空
	else {
		printf("还未创建图书链表，请添加书本后再查询!\n");
	}

	//使页面停留在当前页
	printf("输入任意键返回......");
	getch();
}
