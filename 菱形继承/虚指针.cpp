#include<iostream>
#include<string>
using namespace std;


class animal {
public:
	animal() {
		cout << "animal�Ĺ��캯��" << endl;
	}
	~animal() {
		cout << "animal����������" << endl;
	}
	

	int age;
};


class sheep :virtual public animal{
public:
	sheep() {
		cout << "sheep�Ĺ��캯��" << endl;
	}
	~sheep() {
		cout << "sheep����������" << endl;
	}
};
class tuo :virtual public animal {
public:
	tuo() {
		cout << "tuo�Ĺ��캯��" << endl;
	}
	~tuo() {
		cout << "tuo����������" << endl;
	}

};

class sheeptuo :public sheep, public tuo{
public:
	sheeptuo() {
		cout << "sheeptuo�Ĺ��캯��" << endl;
	}
	~sheeptuo() {
		cout << "sheeptuo����������" << endl;
	}

};

void test() {
	sheeptuo sheeptuo1;
	sheeptuo1.sheep::age = 100;//���ͼ̳У����׵���үү�����������������
	sheeptuo1.tuo::age = 200;

	cout << "sheeptuo1.sheep::age =" << sheeptuo1.sheep::age << endl;
	cout << "sheeptuo1.tuo::age =" << sheeptuo1.tuo::age << endl;

}

int main() {
	test();


	system("pause");
	return 0; 
}


//���н��
//animal�Ĺ��캯��
//sheep�Ĺ��캯��
//animal�Ĺ��캯��
//tuo�Ĺ��캯��
//sheeptuo�Ĺ��캯��
//sheeptuo1.sheep::age = 100
//sheeptuo1.tuo::age = 200
//sheeptuo����������
//tuo����������
//animal����������
//sheep����������
//animal����������


//class sheeptuo  size(8) :
//	+-- -
//	0 | +-- - (base class sheep)
//	0      | | +-- - (base class animal)
//	0      | | | age
//	| | +-- -
//	| +-- -
//	4 | +-- - (base class tuo)
//	4      | | +-- - (base class animal)
//	4      | | | age
//	| | +-- -
//	| +-- -
//	+-- -