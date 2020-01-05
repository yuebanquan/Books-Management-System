#include "del.h"

//删除节点模块
void del(Book* head) {
	//如果链表不为空，开始删除
	if (head) {
		Book* p, * q;//定义指针
		int id;//用于输入编号查找删除
		p = head;//p记录头节点的地址
		q = head->next;//q记录头节点的指针域的地址
		printf("请输入要删除的图书编号：");
		//输入编号
		scanf_s("%d", &id);
		while (q != NULL) { //q不为空时执行循环
			if (q->id == id)//判断是否找到输入的编号
				//为真时
			{
				p->next = q->next;//断开q节点
				free(q);//释放q节点neicun
				q = NULL; //置空q指针防止出现野指针
			}
			else {
				//判断为假时
				p = p->next;//p指针后移
				q = q->next;//q指针后移
			}
		}
		//当查找到最后一个节点还未查到要删除的编号时，输出错误信息
		if (p == NULL) {
			printf("没有此编号\n");
			//使页面停留在当前页
			printf("输入任意键返回......");
			getch();
		}
	}
	//如果链表为空
	else {
		printf("还未创建图书链表，请创建链表后再删除\n");
		//使页面停留在当前页
		printf("输入任意键返回......");
		getch();
	}
	
}