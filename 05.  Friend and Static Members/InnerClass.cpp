#include<iostream>
using namespace std;
class Outer{
    public:
        void func(){
            i.display();
        }
        class Inner{
            public:
                void display(){
                    cout<<"Display of Inner"<<endl;
                }
        };
        Inner i;
};
int main(){
    Outer o;
    o.func();
    Outer::Inner i;
    i.display();
}