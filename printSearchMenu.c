#include "printSearchMenu.h"

//打印搜索菜单
void printSearchMenu() {
	//system("cls");		// 清屏
	system("color 71");	//设置字体和背景颜色

	putchar('\n');
	printf("\t\t图书信息管理系统\t\n");
	printf("\t ============================\n");
	printf("\t ｜\t1.查询所有图书信息 ｜\n");
	printf("\t ｜\t2.根据编号查询     ｜\n");
	printf("\t ｜\t3.根据书名查询     ｜\n");
	printf("\t ｜\t4.根据作者查询     ｜\n");
	printf("\t ｜\t5.返回主菜单       ｜\n");
	printf("\t ============================\n");
	printf("\t请选择功能(1～5,按其他字符退出):");

}