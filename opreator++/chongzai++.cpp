#include<iostream>

using namespace std;



class Myint{
    friend ostream& operator<<(ostream &cout,Myint myint);
public:
    Myint(){
        myint =0;
    }

    //重载前置++运算符
    Myint& operator++(){//引用使得可以继续操作，
        myint++;
        return *this;
    }

    //重载后置++运算符
    Myint operator++(int){//占位运算符，区分前置和后置
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