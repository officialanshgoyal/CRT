#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    char grade;

public:
    void setRoll(int r)
    {
        roll = r;
    }
    int getRoll()
    {
        return roll;
    }



    void setName(string s)
    {
        name = s;
    }
    string getName()
    {
        return name;
    }


    void setGrade(char g)
    {
        grade = g;
    }
    char getGrade()
    {
        return grade;
    }

    
};
int main()
{

    Student s;
    s.setRoll(20);
    cout << s.getRoll() << endl;
    s.setName("ansh");
    cout << s.getName() << endl;
    s.setGrade('a');
    cout << s.getGrade() << endl;

    return 0;
}