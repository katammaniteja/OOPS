#include<iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Base constructor"<<endl;
        }
        ~Base(){
            cout<<"Base destructor"<<endl;
        }
};
class Derived:public Base{
    public:
        Derived(){
            cout<<"Derived Constructor"<<endl;
        }
        ~Derived(){
            cout<<"Derived Destructor"<<endl;
        }
};
int main(){
    Derived p;
}
/* ----Output-----
    Base constructor
    Derived Constructor
    Derived Destructor
    Base destructor */