#include"Choose.h"
#include<stdio.h>


//选择功能
void choose() {
	Book* head = NULL;
	int flag;	//控制主菜单功能
	int i = 1;		//控制循环,以-1终止

	while (i > 0) {
		printMainMenu();	//打印菜单
		scanf_s("%d", &flag);//选择功能

		switch (flag) { //各操作数字对应菜单数字，通过n确定操作类型
		case 1://创建
			head = create(head);
			sortById(head);	//排序
			break;
		case 2://插入
			insert(head);
			break;
		case 3://删除
			del(head);
			break;
		case 4://修改
			mod(head);
			break;
		case 5://查找
			printSearchMenu();	//打印查询菜单
			int flagSerch = 0;	//控制查询菜单功能
			scanf_s("%d", &flagSerch);
			switch (flagSerch) {
			case 1:	//查询所有图书信息
				printBook(head);
				break;
			case 2:	//根据编号查询
				searchById(head);
				break;
			case 3:	//根据书名查询
				searchByName(head);
				break;
			case 4:	//根据作者查询
				searchByAuthor(head);
				break;
			defalt:	//返回主菜单
				break;
			}
			break;
		default:
			i = -1;	//跳出循环，退出管理系统
			printf("\n成功退出管理系统！\n\n");
			printf("按任意字符关闭窗口");
			getch();
			break;
		}	
	}
}