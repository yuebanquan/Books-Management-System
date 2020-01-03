#include<stdio.h>

//定义书本Book的结构体
typedef struct Node {
	int id;			//编号
	char name[50];		//书名
	char author[20];	//作者
	int inventory;		//库存量
	float price;		//价格
	struct Node* next;	//指针域
} Book;	//结构体定义为Book