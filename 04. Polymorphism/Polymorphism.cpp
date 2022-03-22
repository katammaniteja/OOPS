#include<iostream>
using namespace std;
class Car{
    public:
        virtual void start(){
            cout<<"Car Started"<<endl;
        }
};
class Innova:public Car{
    public:
        void start(){cout<<"Innova Started"<<endl;}
};
class Swift:public Car{
    public:
        void start(){cout<<"Swift Started"<<endl;}
};
int main(){
    Car *p=new Innova();
    p->start();
    p=new Swift();
    p->start();
}