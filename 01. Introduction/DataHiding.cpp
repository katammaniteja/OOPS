#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
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
    Rectangle r;
    r.setlength(5);
    r.setbreadth(2);
    cout<<r.getLength()<<" "<<r.getBreadth()<<endl;
    cout<<"Area is "<<r.area()<<endl;
    cout<<"Perimeter is "<<r.perimeter()<<endl;
}
