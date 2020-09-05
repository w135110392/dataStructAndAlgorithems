#include<stdio.h>
#include<stdlib.h>

#define  datatype char
#define  N 100
//用数组实现队列
typedef struct queue {

	datatype data[N];
	int front;//队首
	
	int rear; //队尾

}QUEUE;

void initQUEUE(QUEUE *sq);//初始化队列
int  isempty(QUEUE *sq);//判断队列是否为空
datatype gethead(QUEUE *sq);//获取队列第一个元素
void enQUEUE(QUEUE *sq,datatype data);//入队
datatype deQUEUE(QUEUE *sq);//出队
void showQUEUE(QUEUE *sq);

int main() {
	QUEUE q1;//创建一个队列
	
	initQUEUE(&q1);
	char *str = "abcdefg";
	char *p = str;//存储地址
	while (*p) {
		enQUEUE(&q1,*p);
		showQUEUE(&q1);//显示队列所有元素
		p++;
	}
	while (!isempty(&q1)) {
		
		printf("\n%c",deQUEUE(&q1));//打印出队的字符
		showQUEUE(&q1);//显示队列所有元素
	}


	return 0;
}

void initQUEUE(QUEUE * sq)
{
	sq->front = sq->rear = 0; //队首队尾指向空
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
	return sq->data[sq->front];//返回数组第一个元素值
}
void enQUEUE(QUEUE *sq,datatype data) {

	if (sq->rear == N)return; //队列已满
	sq->data[sq->rear] = data; //入队 增加
	sq->rear++;
}
datatype deQUEUE(QUEUE *sq) { //出队 删除
	if (sq->front == sq->rear) {
		return -1;
	}
	sq->front++; //删除一个元素 向前移动一个
	return sq->data[sq->front - 1];//返回前一个元素
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