#include<iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout, Person p);

public:
	Person(int m_age) {
		age = new int(m_age);

	}

	Person& operator=(Person& p) {//���
		age = new int(*p.age);
		return *this;

	}
	~Person() {

		if (age != nullptr) {//����������������ʱ�����׳���ǳ��������

			//delete age;//���ֶϵ㣬��ô�����
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
	cout << "�����˵�����ֱ�Ϊ��  " << p1 << p2 << p3 << endl;

	p3 = p2 = p1;//��ʽ����������=��ʱ��Ӧ�÷���person�ࣻ
	cout << "����������������˵�����ֱ�Ϊ" << p1 << p2 << p3 << endl;







}


int main() {
	test01();

	system("pause");
	return 0;
}