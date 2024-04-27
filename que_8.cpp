// Reverse a String using Reccursion
#include<iostream>
#include<string>
using namespace std;

void reverse_string(string &text, int start , int end)
{

    if (start >=end)
    return; 
    // swap characters at start andd end indices
    swap(text[start] , text[end]); // swap is available in string 
    // Recursive case : move to the next pair of Characters
    reverse_string(text, start+1 , end-1);
}

int main (){
    string text;
    cout<< " Input a string ";
    cin>>text;
    // getline(cin ,text)

    reverse_string(text,0,text.length()- 1);
    cout<< " Reversed string \n"<< text;
    return 0;
}















