// Stack Basic function 
#include<iostream>
#include<stack>
using namespace std;



int main() {
stack<int> s1;
stack<int> s2;
s1.push(6);
s1.push(3);
s1.push(8);


while(!s1.empty()){
    int toop = s1.top();
    s1.pop();
    s2.push(toop);


}
while(!s2.empty()){
    cout<<s2.top()<< " ";
    s2.pop();
}

return 0;
}