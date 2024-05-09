// program to calculate Area of triangle using multi level inheritance

#include<iostream>
using namespace std;

class A {
public:
	int w;
    int h;
    float area;
	void input()
	{
		cout << "Enter width: "<< endl;
		cin >> w;
        cout << "Enter height: "<< endl;
		cin >> h;
	}
};

class B : public A {
public:
	void cal()
	{
        area = (float)w * h/2.0;
		
	}
};

class C : public B {


public:
	void display()
	{
		cout << "Area of Triangle is : "<< area;
		
	}

};
int main()
{
	
	C obj;

	obj.input();
	obj.cal();
    obj.display();
	return 0;
}
