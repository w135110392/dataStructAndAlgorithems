#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

//�����ڵ�ṹ
typedef struct node {
	int data;
	struct node *pNext;
}NODE;

//����ͷ���
void createHeadNode() {





}



int mainD(void) {
	NODE *p = NULL; //����ͷ���
	//��̬����
	int count=0;
	printf("�趨����Ĵ�С:");
	scanf("%d",&count);
	NODE *pa = (NODE*)calloc(count,sizeof(NODE)*count); //����count��NODE ָ�룬��СNODE*count
	for (int i = 0; i < count;i++) {
		pa[i].data = i + 1;
		printf("%3d",pa[i].data);
	}

	//�ͷ�
	free(pa);
	putchar('\n');
/**************************************************************************/
	//��ָ̬��  ָ�������׵�ַ��ָ�� c++
	NODE *pr=new NODE[10];
	
	for (int i = 0; i < 10;i++) {
		
		(*(pr+i)).data =1+i + 100;
		printf("%6d",(pr+i)->data);
	}
	delete pr;
	putchar('\n');
/**************************************************************************/
	//��ָ̬��  ָ�������׵�ַ��ָ�� c++
	int *arr = new int[30];	
	for (int i = 0; i < 30;i++) {
		*(arr + i) = i + 1;
		//arr[i] = i + 1;
		printf("%3d", arr[i]);
	}
	//�ͷ�
	delete arr;
	putchar('\n');

/**************************************************************************/
	//����ѭ���ͷ�
	NODE *prr[10];
	for (int i = 0; i <sizeof(prr)/sizeof(int); i++) {
		prr[i] = new NODE;
		prr[i]->data = 1+i + 255;
		printf("%6d", prr[i]->data);
		//printf("%6d", (*(prr+i))->data);
	}


	//�ͷ�
	for (int i = 0; i < sizeof(prr)/sizeof(int);i++) {
	
		delete prr[i];
	}
	
/**************************************************************************/

	//��ָ̬������ c
	NODE *pz[4] ;
	for (int i = 0; i < sizeof(pz)/sizeof(int);i++) {
		pz[i] = (NODE*)malloc(sizeof(NODE));
	}

	//����������
	NODE *px = p;
	while (px!=NULL) {
		printf("%d", px->data);
		px = px->pNext;
	}

	//�ͷ�
	for (int i = 0; i < sizeof(pz) / sizeof(int); i++) {
		free(pz[i]);
	}
	//ָ��ջ�ռ������ ָ��
	int arr2[100] = { 0 };
	int *pArr2 = arr2;

	putchar('\n');
	system("pause");
	return 0;
}