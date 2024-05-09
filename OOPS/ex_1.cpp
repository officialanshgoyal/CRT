#include<iostream>
using namespace std;

class Test 
{
    public:
    int s=90;
    void show(){
        cout<< s;

    }
};

int main() {
    Test t;
    t.show();
return 0;
}