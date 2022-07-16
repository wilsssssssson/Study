#include<iostream>
#include<string>
using namespace std;

class abstractcaculator {
public:
	virtual int getResult() {
		return 0;
	}
	int number1;
	int number2;
};
class addCaculator:public abstractcaculator {
public:
	virtual int getResult() {
		return number1 + number2;
	}
};
class subCaculator :public abstractcaculator {
public:
	virtual int getResult() {
		return number1 - number2;
	}
};
class mulCaculator :public abstractcaculator {
public:
	virtual int getResult() {
		return number1 * number2;
	}
};
void test() {
	//ʹ�üӷ�������
	abstractcaculator* caculator;
	
	caculator = new addCaculator;//�������ָ�����ຯ��
	caculator->number1 = 4;//��ָ���ڸ�ֵ
	caculator->number2 = 3;
	cout << caculator->number1 << "+" << caculator->number2 << "=" << caculator->getResult() << endl;
	delete caculator;//ʹ��֮����������

	//ʹ�ü���������
	caculator = new subCaculator;
	caculator->number1 = 4;
	caculator->number2 = 3;
	cout << caculator->number1 << "-" << caculator->number2 << "=" << caculator->getResult() << endl;
	delete caculator;
	//ʹ�ó˷�������
	caculator = new mulCaculator;
	caculator->number1 = 4;
	caculator->number2 = 3;
	cout << caculator->number1 << "*" << caculator->number2 << "=" << caculator->getResult() << endl;
	delete caculator;
	//��������¹���
	
}

int main() {
	test();

	system("pause");
	return 0; 
}

