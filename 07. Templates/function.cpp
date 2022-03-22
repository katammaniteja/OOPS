#include<iostream>
using namespace std;
template<class T>
T add(T a,T b){
    return a+b;
}
int main(){
    int a=2,b=3;
    cout<<add(a,b);