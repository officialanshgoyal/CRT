#include<iostream>
using namespace std;
 
 class Test {
    public:
    int a1;

    Test(int x){
        a1=x;
    }
    Test(){
        cout<< a1;
    }
 } ;

int main() {
    Test t1(45);
    Test t2 ();

return 0;
}