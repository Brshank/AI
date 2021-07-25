//Checking for Balanced Braces in a String
// Here is an example of balance braces: a{b(c)[d]e{f}}
#include<iostream>
#include<stack>
#include<math.h>
#include<string>
using namespace std;


int BracesCheck(string s){
    stack<char> st;
    int top=-1;
    for (int i =0;i<s.length();i++)   //traversing string
    {   
        if (s[i]=='{'||s[i]=='('||s[i]=='[' )  //this will check for s[i] if its number or Operator
            {st.push(s[i]);
             ++top;
                if (s[i+1]=='}'||s[i]==')'||s[i]==']' )
                {
                    st.pop();
                    --top;
                    st.pop();
                    --top;
                }
                else{
                    continue;
                }
            }
        else 
            break;
    }
if (top==-1){
    cout<<"True this a Balanced Paranthesis && Stack is empty" <<" :::Balanced Strings & Value of TOP IS=";
}
else{
    cout<<"Stack is not empty and False this is not a Balanced Paranthesis"<<"  :::UNBalanced Strings & Value of TOP IS=";
}

return top;
}//function ends
int main()
{cout<<BracesCheck("a{b(c)[d]e{f}}")<<endl;   //answer is 3
    return 0;
}
