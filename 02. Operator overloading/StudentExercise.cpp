/*Write a class for rational number (p/q) with overloading + and << operator*/
#include<iostream>
using namespace std;
class Rational{
    private:
        int p;
        int q;
    public:
        Rational(){
            q=1;
            p=1;
        }
        Rational(int p,int q){
            this->p=p;
            this->q=q;
        }
        Rational(Rational &r){
            this->p=r.p;
            this->q=r.q;
        }
        int getP(){return p;}
        int getQ(){return q;}
        void setP(int p){this->p=p;}
        void setQ(int q){this->q=q;}
        Rational operator+(Rational &r){
            Rational t;
            t.p=this->p*r.q+this->q*r.p;
            t.q=this->q*r.q;
            return t;
        }
        friend ostream& operator<<(ostream &o,Rational &r);
};
ostream& operator<<(ostream& o,Rational &r){
    o<<r.p<<"/"<<r.q;
    return o;
}
int main(){
    Rational r1(3,4),r2(2,5),r3;
    r3=r2+r1;
    cout<<r3<<endl;
}
