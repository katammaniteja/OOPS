#include<iostream>
using namespace std;
class Your;
class My{
    private: int a;
    public: int b;
    protected: int c;
    friend Your;
};
class Your{
    void func(){
        My m;
        m.a=10;
    }
};
int main(){

}