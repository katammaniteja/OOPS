#include<iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Base constructor"<<endl;
        }
        virtual ~Base(){
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
    Base* p=new Derived();
    delete p;
}
// if we dont make virtual the resources aquired by Derived class will not be released 
/* output
    Base constructor
    Derived Constructor
    Derived Destructor
    Base destructor */