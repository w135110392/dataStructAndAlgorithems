#define MAX_SIZE 100
typedef struct {
	//����ַ
	int *elems;
	//ʵ�ʳ���
	int length;
	//��С
	int size;
}sqList;

//˳���Ĵ���
bool initList(sqList &L){
	L.elems = new int[MAX_SIZE];
	if (!L.elems)return false; //�洢����ʧ��
	L.length = 0;
	L.size = MAX_SIZE;
	return true;
}
//˳�������Ԫ�� β������
bool appendList(sqList &L,int e) {
	if (L.length == MAX_SIZE)return false;
	L.elems[L.length] = e;
	return true;

}
//˳������Ԫ��
bool insertList(sqList &L,int i,int e) {
	if (i<0 || i>L.length)return false;//�����λ�ò��Ϸ�
	if (L.length == MAX_SIZE)return false;//�����ռ�����
	//�Ȱ�i�������е�Ԫ�غ��ƶ� ���ܲ���
	for (int j = L.length; j >= i;j-- ) {
	
		L.elems[j + 1] = L.elems[j]; //���¸�ֵ Ҳ���Ǻ�����
	
	}

	L.elems[i] = e;
	L.length++;
	return true; 
}
//˳���ɾ��Ԫ��
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
//˳��������
void destroyList(sqList &L) {

	if (L.elems)delete[]L.elems;//�ͷſռ�
	L.length = 0;
	L.size = 0;
}