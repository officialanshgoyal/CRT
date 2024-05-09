#include<iostream>
using namespace std;

class Fruit{
    public:
    void color(){
        cout<< " What is your color "<<endl;
    }
    };
 class Apple : public Fruit{  
    public:
    void color(){
        cout<< " Apple color is red  "<< endl;
    }
 };  
  class Orange : public Fruit{  
    public:
    void color(){
        cout<< " Orange color is Orange  "<< endl;
    }
 }; 
  class Banana : public Fruit{  
    public:
    void color(){
        cout<< " Banana color is Yellow  "<< endl;
    }
 }; 
int main(){

   Apple a=Apple();
   a.color();
   Orange o = Orange();
   o.color();
   Banana b = Banana();
   b.color();


    return 0;
}

