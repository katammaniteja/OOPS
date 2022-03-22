#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    try{
        if(b==0) throw string("Mani");
        cout<<a/b<<endl;
    }
    catch(int e){cout<<"Int Catch"<<endl;}
    catch(double e){cout<<"Double Catch"<<endl;}
    catch(...){cout<<"All catch"<<endl;}
}
