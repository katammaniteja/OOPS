#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
       /* Rectangle(){
            length=0;
            breadth=0;
        }*/
        Rectangle(int l=0,int b=0){
            setlength(l);
            setbreadth(b);
        }
        Rectangle(Rectangle &r){
            length=r.length;
            breadth=r.breadth;
        }
        void setlength(int l){
            if(l<0) length=0;
            else length=l;
        }
        void setbreadth(int b){
            if(b<0) breadth=0;
            else breadth=b;
        }
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};
int main(){
    Rectangle r1(10,5);
    cout<<r1.area()<<" "<<r1.perimeter()<<endl;
    Rectangle r2(r1);
    cout<<r2.area()<<" "<<r2.perimeter()<<endl;
}
