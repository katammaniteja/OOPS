#include<iostream>
using namespace std;
class loc{
    int longitude,latitude;
    public:loc(){}
    loc(int lg,int lt){
        longitude=lg;
        latitude=lt;
    }
    void show(){
        cout<<longitude<<" ";
        cout<<latitude;
    }
    loc operator+(loc op2);
    loc operator-(loc op2);
    loc operator=(loc op2);
    loc operator++();
};
loc loc::operator+(loc op2){
    loc temp;
    temp.longitude=longitude+op2.longitude;
    temp.latitude=latitude+op2.latitude;
    return temp;
}
loc loc::operator-(loc op2){
    loc temp;
    temp.longitude=longitude-op2.longitude;
    temp.latitude=latitude-op2.latitude;
    return temp;
}
loc loc::operator=(loc op2){
    longitude=op2.longitude;
    latitude=op2.latitude;
    return (*this);
}
loc loc::operator++(){
    latitude++;
    longitude++;
    return (*this);
}
int main(){
    loc ob1(0,20),ob2(5,30),ob3;
    ob3=ob1+ob2;
    ob3.show();
    cout<<endl;
    ob3=ob1-ob2;
    ob3.show();
    cout<<endl;
    ob3=ob2;
    ob3.show();
    cout<<endl;
    ++ob3;
    ob3.show();
}