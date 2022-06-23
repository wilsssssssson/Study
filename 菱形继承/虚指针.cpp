#include<iostream>
#include<string>
using namespace std;


class animal {
public:
	animal() {
		cout << "animal的构造函数" << endl;
	}
	~animal() {
		cout << "animal的析构函数" << endl;
	}
	

	int age;
};


class sheep :virtual public animal{
public:
	sheep() {
		cout << "sheep的构造函数" << endl;
	}
	~sheep() {
		cout << "sheep的析构函数" << endl;
	}
};
class tuo :virtual public animal {
public:
	tuo() {
		cout << "tuo的构造函数" << endl;
	}
	~tuo() {
		cout << "tuo的析构函数" << endl;
	}

};

class sheeptuo :public sheep, public tuo{
public:
	sheeptuo() {
		cout << "sheeptuo的构造函数" << endl;
	}
	~sheeptuo() {
		cout << "sheeptuo的析构函数" << endl;
	}

};

void test() {
	sheeptuo sheeptuo1;
	sheeptuo1.sheep::age = 100;//菱型继承，容易导致爷爷类里面的数据有两份
	sheeptuo1.tuo::age = 200;

	cout << "sheeptuo1.sheep::age =" << sheeptuo1.sheep::age << endl;
	cout << "sheeptuo1.tuo::age =" << sheeptuo1.tuo::age << endl;

}

int main() {
	test();


	system("pause");
	return 0; 
}


//运行结果
//animal的构造函数
//sheep的构造函数
//animal的构造函数
//tuo的构造函数
//sheeptuo的构造函数
//sheeptuo1.sheep::age = 100
//sheeptuo1.tuo::age = 200
//sheeptuo的析构函数
//tuo的析构函数
//animal的析构函数
//sheep的析构函数
//animal的析构函数


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