#include<iostream>
using namespace std;
#include<string>




class Person{
    friend ostream& operator<<(ostream &cout,Person p);
public:
    Person(string name,string Telephone,int age):Name(name),Telephone(Telephone),age(age){
        cout<<"person�Ĺ��캯��"<<endl;
    }



private:
    string Name;
    string Telephone;
    int age;


};
ostream& operator<<(ostream &cout,Person p){
    cout<<"����"<<p.Name<<"�绰"<<p.Telephone<<"����"<<p.age<<endl;
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