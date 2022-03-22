#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        Complex(int r=0,int i=0){
            real=r;
            img=i;
        }
        void display(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        Complex operator+(Complex &x){
            Complex temp;
            temp.real=real+x.real;
            temp.img=img+x.img;
            return temp;
        }
};
int main(){
    Complex c1(5,3),c2(10,5),c3;
    c3=c1+c2;
    c3.display();
}
