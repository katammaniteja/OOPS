#include<iostream>
using namespace std;
class Demo{
    public:
        Demo(){
            cout<<"Constructor of Demo"<<endl;
        }
        ~Demo(){
            cout<<"Destructor of Demo"<<endl;
        }
};
void fun(){
    Demo d;
}
int main(){
    fun();
}