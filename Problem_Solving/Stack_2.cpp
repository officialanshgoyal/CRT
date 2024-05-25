// Balanced 

#include<iostream>
#include<stack>
using namespace std;


bool solve(string s){
    stack<char> para_order;
    for(int i=0; i<s.length() ; i++ ){
        char ch =s[i];
        if( ch == '('  || ch == '{' || ch=='['){
            para_order.push(ch);
        }
        else{
            if(!para_order.empty()){
                char c = para_order.top();
                if(c=='(' && ch==')' || c=='{' && ch=='}' || c=='[' && ch==']'){
                    para_order.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }

    }

    if(para_order.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s="()";
    cout<<solve(s)<<endl;
}