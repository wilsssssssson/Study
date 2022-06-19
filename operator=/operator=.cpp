#include<iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout, Person p);

public:
	Person(int m_age) {
		age = new int(m_age);

	}

	Person& operator=(Person& p) {//深拷贝
		age = new int(*p.age);
		return *this;

	}
	~Person() {

		if (age != nullptr) {//当调用析构函数的时候，容易出现浅拷贝问题

			//delete age;//出现断点，怎么解决？
			age = nullptr;
		}

	}

private:
	int* age;
};

ostream& operator<<(ostream& cout, Person p) {
	cout << *p.age << endl;
	return cout;
}
void test01() {
	Person p1(18);
	Person p2(20);
	Person p3(22);
	cout << "三个人的年龄分别为：  " << p1 << p2 << p3 << endl;

	p3 = p2 = p1;//链式操作，重载=的时候，应该返回person类；
	cout << "重载运算符后三个人的年龄分别为" << p1 << p2 << p3 << endl;







}


int main() {
	test01();

	system("pause");
	return 0;
}