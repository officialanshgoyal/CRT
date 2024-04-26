// Class of hii bye
#include<iostream>
#include<string>
using namespace std;

class Student 
{
    string hii;
    string Bye;
    public:
    
    void output();
};  
int main(){
    Student s1; 
    cout<< " Welcome to Jaipur";
    s1.output();
}

    inline void Student::output(){
        cout<<"\n HII ";
        cout<<"\n BYE ";

    }