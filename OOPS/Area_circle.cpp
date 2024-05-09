// Single level inherti
#include<iostream>
using namespace std;
class Circle
{
public :
int r;
    float area = 0;
    float pi=3.14;
void insert(){
    
    cout<< " Enter Radiuss "<<endl;
    cin>>r;
 
}
void cal(){
    
    area = (pi*r*r);
}
};
class Display : public Circle{
    public :
 void show(){
    cout<<" Area ="<< area;
 }
};

int main() {
    Display d;
    d.insert();
    d.cal();
    d.show();
// 
return 0;
} 