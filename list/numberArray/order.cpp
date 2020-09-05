#define MAX_SIZE 100
typedef struct {
	//基地址
	int *elems;
	//实际长度
	int length;
	//大小
	int size;
}sqList;

//顺序表的创建
bool initList(sqList &L){
	L.elems = new int[MAX_SIZE];
	if (!L.elems)return false; //存储分配失败
	L.length = 0;
	L.size = MAX_SIZE;
	return true;
}
//顺序表增加元素 尾部增加
bool appendList(sqList &L,int e) {
	if (L.length == MAX_SIZE)return false;
	L.elems[L.length] = e;
	return true;

}
//顺序表插入元素
bool insertList(sqList &L,int i,int e) {
	if (i<0 || i>L.length)return false;//插入的位置不合法
	if (L.length == MAX_SIZE)return false;//存贮空间已满
	//先把i后面所有的元素后移动 才能插入
	for (int j = L.length; j >= i;j-- ) {
	
		L.elems[j + 1] = L.elems[j]; //重新赋值 也就是后移了
	
	}

	L.elems[i] = e;
	L.length++;
	return true; 
}
//顺序表删除元素
bool deleteList(sqList &L, int i) {
	if (i < 0 || i>L.length)return false; 
	if (i == L.length-1) {
		L.length--;
		return true;
	}
	for (int j = i; j < L.length - 1;j++) {
	
		L.elems[j - 1] = L.elems[j];
	}

	L.length--;
	return true;
}
//顺序表的销毁
void destroyList(sqList &L) {

	if (L.elems)delete[]L.elems;//释放空间
	L.length = 0;
	L.size = 0;
}