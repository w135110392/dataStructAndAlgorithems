#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

//创建节点结构
typedef struct node {
	int data;
	struct node *pNext;
}NODE;

//创建头结点
void createHeadNode() {





}



int mainD(void) {
	NODE *p = NULL; //链表头结点
	//动态数组
	int count=0;
	printf("设定数组的大小:");
	scanf("%d",&count);
	NODE *pa = (NODE*)calloc(count,sizeof(NODE)*count); //分配count个NODE 指针，大小NODE*count
	for (int i = 0; i < count;i++) {
		pa[i].data = i + 1;
		printf("%3d",pa[i].data);
	}

	//释放
	free(pa);
	putchar('\n');
/**************************************************************************/
	//静态指针  指向数组首地址的指针 c++
	NODE *pr=new NODE[10];
	
	for (int i = 0; i < 10;i++) {
		
		(*(pr+i)).data =1+i + 100;
		printf("%6d",(pr+i)->data);
	}
	delete pr;
	putchar('\n');
/**************************************************************************/
	//静态指针  指向数组首地址的指针 c++
	int *arr = new int[30];	
	for (int i = 0; i < 30;i++) {
		*(arr + i) = i + 1;
		//arr[i] = i + 1;
		printf("%3d", arr[i]);
	}
	//释放
	delete arr;
	putchar('\n');

/**************************************************************************/
	//必须循环释放
	NODE *prr[10];
	for (int i = 0; i <sizeof(prr)/sizeof(int); i++) {
		prr[i] = new NODE;
		prr[i]->data = 1+i + 255;
		printf("%6d", prr[i]->data);
		//printf("%6d", (*(prr+i))->data);
	}


	//释放
	for (int i = 0; i < sizeof(prr)/sizeof(int);i++) {
	
		delete prr[i];
	}
	
/**************************************************************************/

	//静态指针数组 c
	NODE *pz[4] ;
	for (int i = 0; i < sizeof(pz)/sizeof(int);i++) {
		pz[i] = (NODE*)malloc(sizeof(NODE));
	}

	//链表遍历输出
	NODE *px = p;
	while (px!=NULL) {
		printf("%d", px->data);
		px = px->pNext;
	}

	//释放
	for (int i = 0; i < sizeof(pz) / sizeof(int); i++) {
		free(pz[i]);
	}
	//指向栈空间数组的 指针
	int arr2[100] = { 0 };
	int *pArr2 = arr2;

	putchar('\n');
	system("pause");
	return 0;
}