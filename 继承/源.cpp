#include<iostream>
#include<string>
using namespace std;




class Base {//父类
public:
	int m_a;
protected://父类和子类相当与public，类外相当于private
	int m_b;
private:
	int m_c;
	
	
};

class son1 : public Base {//public和protected不变
	void fun1() {
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}
};
class son2 : protected Base {//public和protected变成protected
	void fun2() {
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}
};
class son3 : private Base {//public和protected变成private
	void fun2() {
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}
	
};
void test01() {
	son1 a1;
	a1.m_a = 10;
	//a1.m_b = 10;//protected-》protected,类外不可访问

	son2 a2;
	//a2.m_a = 10;//public-》protected,类外不可访问
	//a2.m_b = 10;//protected-》protected,类外不可访问

	son3 a3;
	//a3.m_a = 10;//public-》private,类外不可访问
	//a3.m_b = 10;//protected-》private,类外不可访问
}


int main() {
	test01();

	system("pause");
	return 0;
}