#include<iostream>
using namespace std;

class Test{
    private:
    int num;
    public:
    Test():num(8){}
    void operator <<(int n){
        for(int i = 0; i<n; i++)
        {
        num = num*3;
        }
    }
    void print(){
        cout<<"the count is:"<< num<< endl;
    }
    
};

int main() {
    Test tt;
    tt<<3;
    tt.print();

    
return 0;
}