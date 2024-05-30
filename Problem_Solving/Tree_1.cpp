#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    vector<Node *> child;
};

Node *newNode(int data)
{
    Node *temp =new Node;
    temp -> data = data; 
    return temp;
}
void tree(){
    Node *root = newNode(0);
    vector<Node *> children;
    for (int i= 0 ; i< 3 ; i++){
        Node *temp = newNode(i+1);
        root->child.push_back(temp);

    } 
   
}
/*
void tree(vi values)
{
    int reached = 0;
    Node *root = newNode(values[reached++]);
    int size = values[reached++];
    for (int i = 1; i <size; i++) {
        Node *temp = newNode(values[reached++]);
        root-> child.push_back(temp);
}









int depth(Node *current_node){
    if(current_node->left == NULL && current_)

}
*/
int main() {
    
return 0;
}