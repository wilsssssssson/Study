#include<iostream>
#include<string>
using namespace std;




class Base {//����
public:
	int m_a;
protected://����������൱��public�������൱��private
	int m_b;
private:
	int m_c;
	
	
};

class son1 : public Base {//public��protected����
	void fun1() {
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}
};
class son2 : protected Base {//public��protected���protected
	void fun2() {
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}
};
class son3 : private Base {//public��protected���private
	void fun2() {
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}
	
};
void test01() {
	son1 a1;
	a1.m_a = 10;
	//a1.m_b = 10;//protected-��protected,���ⲻ�ɷ���

	son2 a2;
	//a2.m_a = 10;//public-��protected,���ⲻ�ɷ���
	//a2.m_b = 10;//protected-��protected,���ⲻ�ɷ���

	son3 a3;
	//a3.m_a = 10;//public-��private,���ⲻ�ɷ���
	//a3.m_b = 10;//protected-��private,���ⲻ�ɷ���
}


int main() {
	test01();

	system("pause");
	return 0;
}