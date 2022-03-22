#include<iostream>
using namespace std;
class StackOverFlow:exception{};
class StackUnderFlow:exception{};
class Stack{
    private:
        int *stk;
        int size;
        int top=-1;
    public:
        Stack(int size){
            this->size=size;
            stk=new int[size];
        }
        void push(int x){
            if(top==size-1) throw StackOverFlow();
            top++;
            stk[top]=x;
        }
        int pop(){
            if(top==-1) throw StackUnderFlow();
            top--;
            return stk[top];
        }
};
int main(){
    Stack s(5);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.push(8);
}
