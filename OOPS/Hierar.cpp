// Program to take to two no and cal sum in one class and average in other class Hierarchical Inheritance


// program to calculate Area of triangle using multi level inhheritance

#include<iostream>
using namespace std;

class A {
public:
	int a;
    int b;
  
	void input(int a, int b)

	{
 this -> a=a;
 this -> b =b;
	}
};

class B : public A {
public:
int sum ; 
	void cal1()
	{
       sum = a+b;

		
	}
    void dis(){
        cout<<"Sum is " <<sum << endl;
    }
};

class C : public A {


public:
int average; 
	void cal2()
	{
		average = (a+b)/2;
		
	}
    void disAverage(){
        cout<<"Average is " <<average<< endl;;
    }

};
int main()
{
	
	B obj;

	obj.input(3,5);
	obj.cal1();
    obj.dis();
    
	C obj1;
    obj1.input(3,5);
	obj1.cal2();
    obj1.disAverage();

	return 0;
}
