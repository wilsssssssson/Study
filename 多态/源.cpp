#include<iostream>
#include<string>
using namespace std;

class animal {
public:
	void speak1() {
		cout << "�����ڽ�" << endl;
	}
	virtual void speak2() {
		cout << "�����ڽ�" << endl;
	}
};
class cat:public animal {
public:
	void speak1() {
		cout << "Сè�ڽ�" << endl;
	}
	void speak2() {
		cout << "Сè�ڽ�" << endl;
	}
};
class dog:public animal {
public:
	void speak1() {
		cout << "С���ڽ�" << endl;
	}
	void speak2() {
		cout << "С���ڽ�" << endl;
	}
};
void dospeak(animal& animal) {//ע�⴫���ַ
	animal.speak1();//���ú������Ǿ�̬��̬��������ַ�ڱ���׶ξ��Ѿ�ȷ���������Ϊanimal�غ�����ַ

	animal.speak2();//�麯�����ú����������в�ȷ����ַ
}
void dospeak2(animal animal) {//ע�⴫���ַ
	animal.speak1();//���ú������Ǿ�̬��̬��������ַ�ڱ���׶ξ��Ѿ�ȷ���������Ϊanimal�غ�����ַ

	animal.speak2();
}
void test() {
	cat cat;
	dospeak(cat);
	dospeak2(cat);//���뺯���Ļ�virtual��û����
	

}
void test2() {
	cout << "aniaml�Ĵ�С" << sizeof(animal) << endl;//�麯����洢һ���麯�����ָ�룬���Ի���8���ֽڴ�С
	//��������д��ʱ����ͨ�Ļ�̳�ָ�룬����virtual�ǻḲ��ָ��ĵ�ַ���滻������ĺ�����ַ
}

int main() {
	test();
//test2();

	system("pause");
	return 0; 
}

