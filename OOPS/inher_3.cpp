// C++ Program to show inheritance ambiguity 


#include<iostream>
using namespace std;
// Base class A
class A{
    public:
    void func(){
        cout<< " I am in  class A"<< endl;

    }
};
class B{
    public:
    void func(){
        cout<< " I am in  class b"<< endl;

    }
};


class C : public A , public B{

};


int main() {


// C obj ;
// obj.func();     this will give give error of ambiguity



// Sol
C obj;
obj.A::func();
obj.B::func();


return 0;
}