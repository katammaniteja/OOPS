#include<iostream>
using namespace std;
namespace first{
    void fun(){
        cout<<"First"<<endl;
    }
};
namespace second{
    void fun(){
        cout<<"Second"<<endl;
    }
};
using namespace first;
int main(){
    fun(); // first function is called as we included first namespace
    second::fun(); // Second function is called
}