#include<iostream>
using namespace std;
class Test{
    
    int roll ; // global variable scope whole program 
   public:
    void insert (int r){   // r is a local variable 

        roll = r;

    }
    void display(){
        
        cout<< roll;

    }

};
int main() {
    

    Test t;
    t.insert(20);
    t.display();
return 0;
}