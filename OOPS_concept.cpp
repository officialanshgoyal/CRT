#include<iostream>
#include<string>
using namespace std;

class Student 
{
    int roll;
    string name;
    public:
    void  input();
    void output();
};

int  main ()
{
    Student s1;
    Student s2;
    Student *s3 = new Student;

    cout<<"\n Fill the date of s1 ";
    s1.input();
    cout<<"\n Fill the date of s2 ";
    s2.input();
    cout<<"\n Fill the date of s3 ";
    s3->input();
    
    cout<< " \n All Data saved ";
    s1.output();
    s2.output();
    s3->output();
}
 void  Student::input()
    {
        cout<<" \n Enter roll no ";
        cin>>roll;
        cout<<" \n Enter name  ";
        cin>>name;

    }
    inline void Student::output(){
        cout<<"\n ROll = "<<roll;
        cout<<"\n NAME = "<<name;

    }



























