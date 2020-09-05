#include<stdio.h>
#include<stdlib.h>
#include<string>

typedef struct info {
	int age;
	int num;
	
	struct info *pNext;

}INFO;




//int main1(void) {
//	INFO node;
//	node.num = 123;
//	node.pNext = &node.num;
//	
//	
//	printf("%d,%p", node.num, node.pNext);
//
//	system("pause");
//	return 0;
//}
//int main2(void ) {
//	//动态模式
//	INFO *node = (INFO *)malloc(sizeof(INFO));
//	node->num = 124;
//	node->pNext = &node->num;
//	printf("%d,%p\n",node->num,node->pNext);
//	(*node).num = 126;
//	(*node).pNext = &(*node).num;
//
//	printf("%d,%p\n",(*node).num,(*node).pNext);
//	system("pause");
//}
bool deleteNode(INFO *node,int i) {
	//删除第三个节点
	while (node) {
		(node + (i - 1))->pNext = (node + i)->pNext;
	
	}


	return true;
}
int  main4(void) {
	INFO *n1=new INFO, *n2= new INFO, *n3= new INFO, *n4= new INFO, *n5= new INFO;
	//(*n1).num = 1;
	INFO *p = n1;
	INFO *px = p;
	INFO *py = p;
	INFO *pz = p;
	INFO *pa = p;
	n1->num = 1;
	n2->num = 2;
	n3->num = 3;
	n4->num = 4;
	n5->num = 5;
	n1->age = 14;
	n2->age = 31;
	n3->age = 17;
	n4->age = 18;
	n5->age = 20;
	n1->pNext = n2;
	n2->pNext = n3;
	n3->pNext = n4;
	n4->pNext = n5;
	n5->pNext = NULL;

	/*printf("%d->",p->num);
	printf("%d->", p->pNext->num);
	printf("%d->", p->pNext->pNext->num);
	printf("%d->", p->pNext->pNext->pNext->num);
	printf("%d->", p->pNext->pNext->pNext->pNext->num);*/
	
	
	//如果结构体p 不为空 就输出 p里面的num 
	//然后让p 指向p里面的pnext保存的地址 也就是下一个结构体

	//删除节点
	//deleteNode(p,3);
	n2->pNext = n3->pNext;
	while (px != NULL) {

		printf("%d->", px->num);
		px = px->pNext;
	}
	putchar('\n');
	//中间插入
	INFO *n8 =(INFO *) malloc(sizeof(INFO));
	n8->num = 23000;
	n8->age = 18;
    n8->pNext= n2->pNext;
	n2->pNext = n8;
	while (py != NULL) {

		printf("%d->", py->num);
		py = py->pNext;
	}
	putchar('\n');

	printf("%d->",p->num);
	printf("%d->", p->pNext->num);
	printf("%d->", p->pNext->pNext->num);
	printf("%d->", p->pNext->pNext->pNext->num);
	printf("%d->", p->pNext->pNext->pNext->pNext->num);
	putchar('\n');
	//尾部插入
	INFO *n6 = (INFO *)malloc(sizeof(INFO));
	n6->num = 18888;
	n6->age = 33;
	n5->pNext = n6;
	n6->pNext = NULL;

	while (pz != NULL) {

		printf("%d->", pz->num);
		pz = pz->pNext;
	}
	putchar('\n');

	printf("%d->", p->num);
	printf("%d->", p->pNext->num);
	printf("%d->", p->pNext->pNext->num);
	printf("%d->", p->pNext->pNext->pNext->num);
	printf("%d->", p->pNext->pNext->pNext->pNext->num);
	printf("%d->", p->pNext->pNext->pNext->pNext->pNext->num);
	putchar('\n');
	//修改数据
	int modNum = 0,reModNum=0;
	printf("要修改的数据:");
	scanf("%d",&modNum);
	printf("修改为:");
	scanf("%d", &reModNum);
	while (pa != NULL) {
		if (pa->num == modNum) {
		
			pa->num = reModNum;
		}
		printf("%d->", pa->num);
		pa = pa->pNext;
	}
	putchar('\n');
	system("pause");
	return 0;
}