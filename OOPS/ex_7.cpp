#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    int id  ; 
    string desig;
    const string company = "  XYZ";

    // static string company ;
    Student(int id , string desig )
    {
this -> id = id;
this -> desig = desig;
    }
    void dis ()
    {
        cout<< id << desig<< company;

    }
};
// string Student :: company = " XYZ"
int main() {
Student s1(2," Ansh");
Student s2(3, " Anu");
s1.dis();
cout<<endl;
s2.dis();
return 0;
}