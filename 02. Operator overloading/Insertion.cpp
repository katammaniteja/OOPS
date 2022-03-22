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
        friend ostream& operator<<(ostream &o,Complex &c);
        //friend void operator<<(ostream &o,Complex &c);
};
ostream& operator<<(ostream &o,Complex &c){
    o<<c.real<<"+"<<c.img<<"i";
    return o;
}
/* void operator<<(ostream &o,Complex &c){
    o<<c.real<<"+"<<c.img<<"i";
}*/
int main(){
    Complex c(10,5);
    cout<<c<<endl; //We  can use endl here
    //operator<<(cout,c);
    // We can also do by above method but ostream is general method
}
