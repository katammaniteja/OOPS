Program 1:-
#include<iostream>
using namespace std;
int main(){
    const int x=10;
    int const y=10;
    x++,y++; // Error: We cannot modify the constant Identifiers
    cout<<x<<" "<<y;
}

Program 2:-
#include<iostream>
using namespace std;
int main(){
    const int x=10;
    int *ptr=&x; // Error: We cannot store the adresses of constant identifiers to pointer
    cout<<x;
}

Program 3:-
#include<iostream>
using namespace std;
int main(){
    const int x=10;
    const int *ptr=&x; // Now we can access
    ++*ptr; // Error: We cant modify the value
}

Program 4:-
#include<iostream>
using namespace std;
int main(){
    int x=10;
    const int *ptr=&x;
    ++*ptr; // We cant perform this operation
    ++x; // We can perform this operation
}

Program 5:-
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int const *ptr=&x;
    int y=11;
    ptr=&y; // We can do this operation
    ++*ptr; // We cannot modify
}

Program 6:-
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *const ptr=&x; // Pointer constant of type integer pointer
    ++*ptr; // We can perform this
    int y=10;
    ptr=&y; // We cannot do this because the pointer variable is constant it cannot be modified
}

Program 7:-
#include<iostream>
using namespace std;
int main(){
    int x=10;
    const int * const ptr=&x;
    // We cannot modify either pointer variable or constant identifier pointing by pointer
    ++*ptr; // Error
    int y=10;
    ptr=&y; // Error
}

Program 8:-
#include<iostream>
using namespace std;
class Demo{
    public:
        int x=10;
        int y=20;

        void display() const{
            x++; // Error: we cannot modify the members of class when the function declared as a constant
            cout<<x<<" "<<y<<endl;
        }
};
int main(){
    Demo d;
    d.display();
}

Program 9:- 
#include<iostream>
using namespace std;
void fun(const int &a,int &b){
    cout<<a<<" "<<b<<endl;
    a++; // We cannot modify this
}
int main(){
    int x=10;
    int y=20;
    fun(x,y);
    cout<<x<<" "<<y<<endl;
}