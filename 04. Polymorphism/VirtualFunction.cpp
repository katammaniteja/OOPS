#include<iostream>
using namespace std;
class Base{
    public:
        virtual void func(){
            cout<<"func of Base Class"<<endl;
        }
};
class Derived:public Base{
    public:
        void func(){
            cout<<"func of Derived Class"<<endl;
        }
};
int main(){
    Base*p=new Derived();
    p->func();
}