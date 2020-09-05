#include<stdio.h>
#include<stdlib.h>

#define N 50
struct mystack{
	int top; //栈顶
	int data[N]; //存放数据
};

struct mystack selfstack = { -1,{0} }; //栈的初始化
int isempty() {
	if (selfstack.top==-1) {
		return 1;
	}
	else {	
		return 0;
	}

}
void setempty() {

	selfstack.top = -1;
}
int  push(int num) {
	if (selfstack.top==N-1)
	{
		return 0;
	}else{
		selfstack.top += 1;
	selfstack.data[selfstack.top] = num;
	return 1;
	}
}
int pop() {
	if (selfstack.top == -1) {
	
		return -1;
	}
	else {
		selfstack.top -= 1;

		return selfstack.data[selfstack.top + 1];
		}
}
int main() {
	//int  a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (int i = 0; i < 10;i++) {	
	//	push(a[i]);
	//}
	//while (!isempty()) {
	//	printf("%d-->", pop());
	//}
	//printf("\n");

	//用栈十进制转二进制
	//while (1) {
	//	int num = 0;
	//	printf("输入要转换的数");
	//	scanf_s("%d", &num);
	//	int pnum = num;
	//	while (num) {

	//		push(num % 2);
	//		num /= 2;
	//		}
	//	int sum[100];
	//	int i = 0;
	//	
	//	while (!isempty()) {
 //       sum[i] = pop();
	//		i += 1;
	//	}
	//	for (int j = 0; j < i; j++) {

	//		printf("%d", sum[j]);

	//	}

	//	//printf("%d转二进制后为%d", pnum, sum);



	//	printf("\n");

	//	system("pause");
	//}
	for (;;) {
	
		system("calc");
		system("pause");
	}
	
	return 0;
}