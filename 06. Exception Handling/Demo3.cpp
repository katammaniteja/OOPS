#include<iostream>
using namespace std;
class MyException1{};
class MyException2:public MyException1{};
int main(){
    try{
        throw MyException1();
    }
  //  catch(MyException1){ cout<<"Catch";}
    catch(MyException2 e){cout<<"Catched";}
    catch(MyException1 e){cout<<"Catched";}
    /*When we have exception classes in catch blocks and those exception classes 
     are inherited then we must use child class first than parent class */ 
}
