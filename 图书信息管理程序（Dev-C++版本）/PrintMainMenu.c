#include"PrintMainMenu.h"

//打印菜单
void printMainMenu() {
	system("cls");		// 清屏
	system("color 71");	//设置字体和背景颜色
	putchar('\n');
	printf("\t\t图书信息管理系统\t\n");	
	printf("\t ============================\n");
	printf("\t ｜\t作者：蔡佳泉       ｜\n");
	printf("\t ｜\t学号：1711216      ｜\n");
	printf("\t ============================\n");
	printf("\t ｜\t1.图书链表创建     ｜\n");
	printf("\t ｜\t2.图书信息插入     ｜\n");
	printf("\t ｜\t3.图书信息删除     ｜\n");
	printf("\t ｜\t4.图书信息修改     ｜\n");
	printf("\t ｜\t5.图书信息查询     ｜\n");
	printf("\t ｜\t6.退出管理系统     ｜\n");
	printf("\t ============================\n");
	printf("\t请选择功能模块(1～6,按其他字符退出):");

}
