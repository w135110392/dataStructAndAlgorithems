#include <iostream>
#include <windows.h>
#include<string>
using namespace std;
int mainf(void) {
	string gong_lue1[5] = { "吸引", "吃夜宵", "咖的电影", "订房", "谈理想" };
	string gong_lue2[5] = { "吸引", "泡吧", "蹦极", "K歌", "谈理想" };

	string(*p)[5];
	p = &gong_lue1;

	for (int i = 0; i < sizeof(gong_lue1) / sizeof(gong_lue1[0]); i++) {
		//cout << (*p)[i] << endl;
		cout << p[0][i] << endl;// *p 就是 *(p+0), 就是 p[0]
	}

	p = &gong_lue2;
	for (int i = 0; i < sizeof(gong_lue2) / sizeof(gong_lue2[0]); i++) {
		cout << p[0][i] << endl;
	}


	system("pause");
	return 0;
}