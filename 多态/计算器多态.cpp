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
	//使用加法计算器
	abstractcaculator* caculator;
	
	caculator = new addCaculator;//父类对象指向子类函数
	caculator->number1 = 4;//先指向在赋值
	caculator->number2 = 3;
	cout << caculator->number1 << "+" << caculator->number2 << "=" << caculator->getResult() << endl;
	delete caculator;//使用之后销毁子类

	//使用减法计算器
	caculator = new subCaculator;
	caculator->number1 = 4;
	caculator->number2 = 3;
	cout << caculator->number1 << "-" << caculator->number2 << "=" << caculator->getResult() << endl;
	delete caculator;
	//使用乘法计算器
	caculator = new mulCaculator;
	caculator->number1 = 4;
	caculator->number2 = 3;
	cout << caculator->number1 << "*" << caculator->number2 << "=" << caculator->getResult() << endl;
	delete caculator;
	//后续添加新功能
	
}

int main() {
	test();

	system("pause");
	return 0; 
}

