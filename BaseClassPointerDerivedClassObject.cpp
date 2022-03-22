#include<iostream>
using namespace std;
class Base{
    public:
        void fun1(){
            cout<<"fun1 of Base"<<endl;
        }
};
class Derived:public Base{
    public:
        void fun1(){
            cout<<"fun1 of Derived"<<endl;
        }
        void fun2(){
            cout<<"fun2 of Derived"<<endl;
        }
};
int main(){
    Derived d;
    d.fun1();
    d.fun2();
    Base* ptr=new Derived();
    ptr->fun1();
    ptr->fun2(); //This function cannot be called
    Derived *ptr1=new Base(); // Error: Cannot assigned object of base class to derived class
}
