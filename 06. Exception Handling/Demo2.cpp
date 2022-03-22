#include<iostream>
using namespace std;
class MyException{};
int division(int a,int b){
    if(b==0) throw MyException();
}
int main(){
    int x,y,z;
    cin>>x>>y;
    try{
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(MyException e){
        cout<<"Division by 0"<<endl;
    }
    cout<<"Bye"<<endl;
}