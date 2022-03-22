#include<iostream>
using namespace std;
template<class T>
class Stack{
    private:
        T *stk;
        int top=-1;
        int size;
    public:
        Stack(int sz){
            size=sz;
            stk=new T(size);
        }
        void push(T x);
        T pop();
};
template<class T>
void Stack<T>::push(T x){
    if(top==size-1) cout<<"Stack is full"<<"\n";
    else{
        top++;
        stk[top]=x;
    }
}
template<class T>
T Stack<T>::pop(){
    if(top==-1)
        cout<<"Stack is Empty"<<"\n";
    else{
        return stk[top];
        top--;
    }
}
int main(){
    Stack<float>s(10);
    s.push(10);
    s.push(23);
    s.push(33);
}