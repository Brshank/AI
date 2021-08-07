#include<iostream>
using namespace std;
class Node{

    int data,next;
    node*next;
    public:
    void Insert(int value);
    void Display();
}
Node::Insert(int value){
    node*end=newnode;
    
    end->next=;
    end->data=value;
    end->next=NULL;

}

Node::Display(){
    node* currentNode = head;
    while (currentNode!=NULL){
        cout<<currentNode->data<<endl;
        currentNode=currentNode->next;
    }
}

int main(){
    
    return 0;
}