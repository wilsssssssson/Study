#include<iostream>
#include<string>
using namespace std;

class animal {
public:
	void speak1() {
		cout << "动物在叫" << endl;
	}
	virtual void speak2() {
		cout << "动物在叫" << endl;
	}
};
class cat:public animal {
public:
	void speak1() {
		cout << "小猫在叫" << endl;
	}
	void speak2() {
		cout << "小猫在叫" << endl;
	}
};
class dog:public animal {
public:
	void speak1() {
		cout << "小狗在叫" << endl;
	}
	void speak2() {
		cout << "小狗在叫" << endl;
	}
};
void dospeak(animal& animal) {//注意传入地址
	animal.speak1();//调用函数是是静态多态，函数地址在编译阶段就已经确定，传入地为animal地函数地址

	animal.speak2();//虚函数会让函数在运行中才确定地址
}
void dospeak2(animal animal) {//注意传入地址
	animal.speak1();//调用函数是是静态多态，函数地址在编译阶段就已经确定，传入地为animal地函数地址

	animal.speak2();
}
void test() {
	cat cat;
	dospeak(cat);
	dospeak2(cat);//传入函数的话virtual并没有用
	

}
void test2() {
	cout << "aniaml的大小" << sizeof(animal) << endl;//虚函数会存储一个虚函数表的指针，所以会有8个字节大小
	//当函数重写的时候，普通的会继承指针，但是virtual是会覆盖指针的地址，替换成子类的函数地址
}

int main() {
	test();
//test2();

	system("pause");
	return 0; 
}

