#include <iostream>
#include <windows.h>
#include<string>
using namespace std;
int mainf(void) {
	string gong_lue1[5] = { "����", "��ҹ��", "���ĵ�Ӱ", "����", "̸����" };
	string gong_lue2[5] = { "����", "�ݰ�", "�ļ�", "K��", "̸����" };

	string(*p)[5];
	p = &gong_lue1;

	for (int i = 0; i < sizeof(gong_lue1) / sizeof(gong_lue1[0]); i++) {
		//cout << (*p)[i] << endl;
		cout << p[0][i] << endl;// *p ���� *(p+0), ���� p[0]
	}

	p = &gong_lue2;
	for (int i = 0; i < sizeof(gong_lue2) / sizeof(gong_lue2[0]); i++) {
		cout << p[0][i] << endl;
	}


	system("pause");
	return 0;
}