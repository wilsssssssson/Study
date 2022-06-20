#include<iostream>
#include<string>
using namespace std;




class myadd {
	
public://为什么这个public没有就不行
	void operator()(string oeet) {//重载函数运算符
		cout << oeet << endl;
	}
	void operator()(int a, int b) {
		cout << "两数之和为" << a + b << endl;
	}
	
};

void test01() {
	myadd test;
	test("ceshi");//伪函数，形式不固定，返回值和参数任意

	myadd()(100, 100);//匿名函数，当前行结束即被释放
}


int main() {
	test01();

	system("pause");
	return 0;
}