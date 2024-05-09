#include<iostream>
using namespace std;

class A{
    public:
    void myname(){
        cout<< " What is your name"<<endl;
    }
    };
 class B : public A{  
    public:
    void myname(){
        cout<< " My name is Ansh Goyal "<< endl;
    }
 };  
int main(){

   B b;
   b.myname();

    return 0;
}

