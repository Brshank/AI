#include<iostream>
using namespace std;
class Stack{
    public:
    int top;
    int len = sizeof(arr)/sizeof(arr[0]) ;
    Stack(){
        top=-1;    //Constructor
    }
    int arr[10]={};
    void push(int );
    void pop();
    void display();
    // int top();
    // int isEmpty();
    };
void Stack::push(int push)
{
    if (top >= (len-1)){
        cout<<"Stack is Full(Overflow)"<<endl;
        
    }
    else {
        arr[++top]=push;
        cout<<"Pushed: "<<push<<" into the Stack"<<endl;
        len++;
    }
}
void Stack::pop()
{
    if (top<0){
    cout<<"Stack is empty(Underflow)"<<endl;

    }
    else{
        cout<<"We have successfully popped:"<<top+1<<endl;   
        arr[top]={};
        --top;
        len--; 
    }
} 

void Stack::display()
{   cout<<"The Stack is as Follows:"<<endl;
    for (int i = top; i >= 0; i--)
		cout <<"\t["<< arr[i]<< "]\t"<< endl;

}

int main()
{Stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.pop();
st.display();
// st.top();
    
    return 0;
}