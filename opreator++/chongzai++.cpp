#include<iostream>

using namespace std;



class Myint{
    friend ostream& operator<<(ostream &cout,Myint myint);
public:
    Myint(){
        myint =0;
    }

    //����ǰ��++�����
    Myint& operator++(){//����ʹ�ÿ��Լ���������
        myint++;
        return *this;
    }

    //���غ���++�����
    Myint operator++(int){//ռλ�����������ǰ�úͺ���
        Myint temp(*this);
        myint++;
        return temp;

    }



private:
    int myint;
};
ostream& operator<<(ostream &cout,Myint myint){
    cout<<myint.myint<<endl;
}

void test01(){
    Myint nub1;


    cout<<++nub1<<endl;
    cout<<nub1<<endl;
}
void test02(){
    Myint nub1;


    cout<<nub1++<<endl;
    cout<<nub1<<endl;
}


int main(){
    test01();
    test02();
    system("pause");
    return 0;
}