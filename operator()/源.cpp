#include<iostream>
#include<string>
using namespace std;




class myadd {
	
public://Ϊʲô���publicû�оͲ���
	void operator()(string oeet) {//���غ��������
		cout << oeet << endl;
	}
	void operator()(int a, int b) {
		cout << "����֮��Ϊ" << a + b << endl;
	}
	
};

void test01() {
	myadd test;
	test("ceshi");//α��������ʽ���̶�������ֵ�Ͳ�������

	myadd()(100, 100);//������������ǰ�н��������ͷ�
}


int main() {
	test01();

	system("pause");
	return 0;
}