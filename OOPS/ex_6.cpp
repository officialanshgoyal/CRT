#include<iostream>
using namespace std;
   // static  int  cm = 7500;

class Student {
    int roll ; 
    string name;
    static  const int  cm = 7500;
    Student(int roll, string name )
    {
this -> roll = roll;
this -> name =name;
    }
    void dis ()
    {
        cout<<roll<<name<< cm;

    }
};
int main() {
    Student s1();
return 0;
}