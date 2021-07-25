#include<iostream>
#include<stack>
#include<math.h>
#include<string>
using namespace std;

int PostfixEvaluation(string s){
    stack<int> st;
    for (int i =0;i<s.length();i++)   //traversing string
    {
        if (s[i]>='0' && s[i]<='9')  //this will check for s[i] if its number or Operator
        {st.push(s[i]-'0');}   //firdst intake 8 then  4 then + then 4 then /
        // .isdigit()
        // char c=  " "  //78 30 + 4 /
        else{  //this is for operators +-*/^
                int operand2=st.top();    //4
                st.pop();
                int operand1=st.top();   //8
                st.pop(); 

                switch (s[i])
                {
                case '+':
                    st.push(operand1+operand2);   //8+4=12
                    break;
                case '-':
                    st.push(operand1-operand2);
                    break;
                case '*':
                    st.push(operand1*operand2);
                    break;
                case '/':
                    st.push(operand1/operand2);  //12/4==3
                    break;
                case '^':
                    st.push(pow(operand1,operand2));
                    break;
                }
        
            }
    }return st.top();  //pushes top to 3 
}
int main()
{cout<<"The postfix Evaluation for '84+4/' is: "<<PostfixEvaluation("84+4/")<<endl;   //answer is 3
    return 0;
}