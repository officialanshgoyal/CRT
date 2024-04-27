

// check if a string is a palindrmee
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(const  string &text , int start , int end)
{
    if ( start >= end)
    return true;
    if (text[start] != text[end])
    return false;

    return isPalindrome(text, start+1,end-1);

} 


int main(){
    string text;

    cout<< " input a string ";
    cin>> text;
     // getline(cin,text)
     // transform the string to lower case
    bool palindrome = isPalindrome(text, 0 , text.length()-1);


    // Display
    if (palindrome == true ) {
        cout <<"The word \""<< text <<"\" is a palindrome."<< endl ;
    } else {
        cout <<"The word \""<< text <<"\" is not a palindrome."<< endl ;
    }
   return 0;

}













