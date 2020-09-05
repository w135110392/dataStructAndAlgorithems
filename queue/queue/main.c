#include<stdio.h>
#include<stdlib.h>

#define  datatype char
#define  N 100
//������ʵ�ֶ���
typedef struct queue {

	datatype data[N];
	int front;//����
	
	int rear; //��β

}QUEUE;

void initQUEUE(QUEUE *sq);//��ʼ������
int  isempty(QUEUE *sq);//�ж϶����Ƿ�Ϊ��
datatype gethead(QUEUE *sq);//��ȡ���е�һ��Ԫ��
void enQUEUE(QUEUE *sq,datatype data);//���
datatype deQUEUE(QUEUE *sq);//����
void showQUEUE(QUEUE *sq);

int main() {
	QUEUE q1;//����һ������
	
	initQUEUE(&q1);
	char *str = "abcdefg";
	char *p = str;//�洢��ַ
	while (*p) {
		enQUEUE(&q1,*p);
		showQUEUE(&q1);//��ʾ��������Ԫ��
		p++;
	}
	while (!isempty(&q1)) {
		
		printf("\n%c",deQUEUE(&q1));//��ӡ���ӵ��ַ�
		showQUEUE(&q1);//��ʾ��������Ԫ��
	}


	return 0;
}

void initQUEUE(QUEUE * sq)
{
	sq->front = sq->rear = 0; //���׶�βָ���
}
int isempty(QUEUE *sq) {
	if (sq->front==sq->rear) {
		return 1;
	}
	else {
		return 0;
	}

}
datatype gethead(QUEUE *sq) {
	if (sq->front == sq->rear) {
		return -1;
	}
	return sq->data[sq->front];//���������һ��Ԫ��ֵ
}
void enQUEUE(QUEUE *sq,datatype data) {

	if (sq->rear == N)return; //��������
	sq->data[sq->rear] = data; //��� ����
	sq->rear++;
}
datatype deQUEUE(QUEUE *sq) { //���� ɾ��
	if (sq->front == sq->rear) {
		return -1;
	}
	sq->front++; //ɾ��һ��Ԫ�� ��ǰ�ƶ�һ��
	return sq->data[sq->front - 1];//����ǰһ��Ԫ��
}
void showQUEUE(QUEUE *sq) {
	
	
	if (sq->front == sq->rear) {
		return ;
	}
	else {
		printf("\nfront=%d,rear=%d\n", sq->front, sq->rear);
		for (int i =sq->front; i < sq->rear;i++) {
		
			printf("%3c",sq->data[i]);
		}
/*		while (!isempty(sq)) {
	printf("%2c", sq->data[sq->front]);
	sq->front++;
}*/	
	
	}

}