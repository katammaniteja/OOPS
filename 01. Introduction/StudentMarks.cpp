#include<iostream>
using namespace std;
class Student{
    private:
        int roll;
        string name;
        int mathMarks;
        int phyMarks;
        int chemMarks;
    public:
        Student(int r,string n,int m,int p,int c){
            roll=r;
            name=n;
            mathMarks=m;
            phyMarks=p;
            chemMarks=c;
        }
        int total(){
            return mathMarks+phyMarks+chemMarks;
        }
        char grade(){
            float average=total()/3;
            if(average>60) return 'A';
            else if(average<40) return 'C';
            else return 'B';
        }
};
int main(){
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter the roll number of the student: ";
    cin>>roll;
    cout<<"Enter the name of the student: ";
    cin>>name;
    cout<<"Enter the marks of maths, physics and chemistry respectively: ";
    cin>>m>>p>>c;
    Student s1(roll,name,m,p,c);
    cout<<"Total marks obtained by the student is: "<<s1.total()<<endl;
    cout<<"Grade given to the student is: "<<s1.grade()<<endl;
}
