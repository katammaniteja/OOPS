#include<iostream>
using namespace std;
int division(int a,int b){
    if(b==0) throw 101;
    return a/b;
}
int main(){
    int a,b,c;
    cin>>a>>b;
    try{
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(int e){
        cout<<"Division by zero error "<<e<<endl;
    }
    cout<<"Bye";
}