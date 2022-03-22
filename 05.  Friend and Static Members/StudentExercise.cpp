#include<iostream>
using namespace std;
class Student{
    public:
        int roll;
        string name;
        static int addNO;
        Student(string n){
            name=n;
            addNO++;
            roll=addNO;
        }
        void display(){
            cout<<"Name "<<name<<endl;
            cout<<"Roll No "<<roll<<endl;
        }
};
int Student::addNO=0;
int main(){
    Student s1("Pavani");
    Student s2("Lohit");
    Student s3("Maniteja");
    s1.display();
    s3.display();
}