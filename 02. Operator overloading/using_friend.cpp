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
        cout<<longitude<<" "<<latitude<<endl;
    }
    friend loc operator+(loc ,loc );
};
loc operator+(loc op1,loc op2){
    loc temp;
    temp.longitude=op1.longitude+op2.longitude;
    temp.latitude=op1.latitude+op2.latitude;
    return temp;
}
int main(){
    loc obj1(10,20),obj2(20,30),obj3;
    obj3=obj1+obj2;
    obj3.show();
}