#include<iostream>
#include<fstream>
#include<algorithm>
#include <set>
using namespace std;

void play_with_set(){
    // set is a container that stores unique elements
    set<int> set1;
    set1.insert(4);
set1.insert(3);
set1.insert(2);
set1.insert(1);
set1.insert(1);

    set<int>::iterator itr;
    for(itr=set1.begin();itr!=set1.end();itr++){
        cout<<*itr<<" ";
    
}
cout<<endl;
    for(int x:set1){
        cout<<x<<" ";
    }
  cout<<" \n";
}
int main() {
    play_with_set();

return 0;
}