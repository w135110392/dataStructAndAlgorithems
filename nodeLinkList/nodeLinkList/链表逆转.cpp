#include<stdio.h>
#include<stdlib.h>







typedef struct node {
	int data;
	struct node *pNext;
}NODE;

NODE *rev(NODE* node){  //��ת
	NODE *p1, *p2, *p3;
	p1 = p2 = p3 = NULL;
	//���ͷ���Ϊ�գ�����ֻ��һ��ͷ��� ��ֱ�ӷ���ͷ���
	if (node == NULL || node->pNext == NULL) {
		return node;
	}
	p1 = node;
	p2 = node->pNext;
	while (p2) {
		p3 = p2->pNext;
		p2->pNext = p1;
		p1 = p2;
		p2 = p3;
	
	}
	
}
int main(void) {
	NODE *node[5];
	for (int i = 0; i < sizeof(node) / sizeof(int);i++) {
		*(node + i) = (NODE *)malloc(sizeof(NODE));
		(*(node + i))->data = 1 +i + 90;
		printf("%3d", (*(node + i))->data);
	}




	putchar('\n');

	//�ͷ�
	for (int i = 0; i < sizeof(node) / sizeof(int); i++) {
		free(*(node + i));
		
	}
	system("pause");
	return 0;
}
