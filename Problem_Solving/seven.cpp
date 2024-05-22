// Mode in array  
// Emotaization 
// Map in array
#include<iostream>
#include<map>


using namespace std;

void understanding_map(){
    map<string , string>crushes;
    crushes["Lakshya"]="tina";
    crushes["Kushal"]="tina";
    crushes["Bhavini"]="srk";
    crushes["Yash"]="Rashmika";
    
    for( map<string, string> :: iterator itr=crushes.begin();  itr != crushes.end(); itr++){

            cout<<(itr->first) <<": "<< (itr->second)<<"\n";
    }

    /*
    for(auto i: crushes)
    {
            cout<<(itr.first) <<": "<< (itr.second)<<"\n";
    }
        
    )
    */
}
int main() {
    understanding_map();

return 0;
}