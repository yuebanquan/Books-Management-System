#include"Choose.h"
#include<stdio.h>



//选择功能
void choose() {
	Book* head;
	int flag;	//控制功能
	int i = 1;		//控制循环,以-1终止

	while (i > 0) {
		printMenu();	//打印菜单
		scanf_s("%d", &flag);//选择功能

		switch (flag) { //各操作数字对应菜单数字，通过n确定操作类型
		case 1://创建
			printf("创建 待开发\n");
			head = create();
			break;
		case 2://插入
			printf("插入 待开发\n");
			break;
		case 3://删除
			printf("删除 待开发\n");
			break;
		case 4://修改
			printf("修改 待开发\n");
			break;
		case 5://查找
			printf("查找 待开发\n");
			break;
		default:
			i = -1;	//跳出循环，退出管理系统
			printf("\n成功退出管理系统！\n");
			break;
		}	
	}
}