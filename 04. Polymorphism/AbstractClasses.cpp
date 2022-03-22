#include<iostream>
using namespace std;
class Car{
    public:
        virtual void start()=0; //Pure Virtual Function
        void stop(){cout`<<"Car Stopped"<<endl;}
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
    Car c; //We cant create object of class car because it has Pure virtual function
    Car *p=new Innova();
    p->start();
    p=new Swift();
    p->start();
}