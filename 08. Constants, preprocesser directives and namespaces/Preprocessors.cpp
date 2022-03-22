Program 1:-
#include<iostream>
using namespace std;
#define PI 3.1425
#define PI 3 // We will get warning as we redifined macro
int main(){
    cout<<PI; // 3 will be printed
}

Program 2:-
#include<iostream>
using namespace std;

#define PI 3.1425

#ifndef PI
    #define PI 3
#endif
int main(){
    cout<<PI; // 3.1425 will print
}

Program 3:-
#include<iostream>
using namespace std;
#define max(x,y) (x>y?x:y) // We must write brackets()
#define msg(x) #x //"x"
#ifndef PI
    #define PI 3.1425
#endif
int main(){
    cout<<(10,12);
    cout<<msg(hello); //hello will be printed
}