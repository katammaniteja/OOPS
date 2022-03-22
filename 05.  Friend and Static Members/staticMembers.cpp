#include<iostream>
using namespace std;
class Test{
    public :
        int a;
        static int count;
        Test(){
            a=10;
            count++;
        }
};
int Test::count=0;
int main(){
    cout<<Test::count<<endl;
    Test t1;
    cout<<t1.count<<endl;
    Test t2;
    cout<<t1.count<<endl;
}