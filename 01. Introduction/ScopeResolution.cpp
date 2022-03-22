#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l,int b);
        Rectangle(Rectangle &r);
        void setLength(int l);
        void setBreadth(int b);
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};
int main(){
    Rectangle r1(10,10);
    cout<<"Area: "<<r1.area()<<" Perimeter: "<<r1.perimeter()<<endl;
    if(r1.isSquare()) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
Rectangle::Rectangle(){
    length=0;
    breadth=0;
}
Rectangle::Rectangle(int l,int b){
    setLength(l);
    setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r){
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l){
    if(l<0) length=0;
    else length=l;
}
void Rectangle::setBreadth(int b){
    if(b<0) breadth=0;
    else breadth=b;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length+breadth);
}
bool Rectangle::isSquare(){
    return length==breadth;
}
Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed";
}
