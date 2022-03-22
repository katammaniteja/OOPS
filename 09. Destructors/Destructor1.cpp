#include<iostream>
using namespace std;
class Demo{
    public:
        Demo(){
            cout<<"Constructor of demo"<<endl;
        }
        ~Demo(){
            cout<<"Destructor of demo"<<endl;
        }
};
void fun(){
    Demo *p=new Demo(); // When we create an object in heap dynamiclly only constructor will be called
    delete p;
}
int main(){
    fun();
}