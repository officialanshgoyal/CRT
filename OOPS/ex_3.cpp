#include<iostream>
using namespace std;
 
 class average {
    int a1;
    int b1;
    int c1;
    float sum;
    public:
    void insert(int a,int b,int c){
        a1=a;
        b1=b;
        c1=c;
    }
    void calc(){
        sum = (float)(a1+b1+c1)/3;

    }
    void display(){
        cout<< sum;
    }
 } ;

int main() {
    average a1;
    a1.insert(3,5,6);
    a1.calc();
    a1.display();

return 0;
}