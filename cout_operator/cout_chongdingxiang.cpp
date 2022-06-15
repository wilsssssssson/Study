#include<iostream>
using namespace std;
#include<string>




class Person{
    friend ostream& operator<<(ostream &cout,Person p);
public:
    Person(string name,string Telephone,int age):Name(name),Telephone(Telephone),age(age){
        cout<<"person的构造函数"<<endl;
    }



private:
    string Name;
    string Telephone;
    int age;


};
ostream& operator<<(ostream &cout,Person p){
    cout<<"姓名"<<p.Name<<"电话"<<p.Telephone<<"年龄"<<p.age<<endl;
    return cout;

}
void test(){
    Person a1("mike","1234",18);
    Person a2("limei","009887",20);
    cout<<a1<<a2<<endl;

}

int main(){
    test();
    system("pause");
    return 0;

}