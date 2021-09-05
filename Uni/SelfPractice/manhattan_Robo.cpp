#include<iostream>
#include<math.h>
using namespace std;
int main(){
float x1,x2,x3,y1,y2,y3;
cout<<"Please Enter the Start Co-Ordinates:="<<endl;
cin>>x1>>y1;   
float A[x1][y1];

cout<<"Please Enter the END Co-Ordinates:="<<endl;
cin>>x2>>y2;   

float B[x2][y2];

 x3=x2-x1;
 y3=y2-y1;
// fabs(x3);
// fabs(y3);
// float Dif[x3][y3];
cout<<"The Manhattan Distance between the Start and End is=="<<Dif[x3][y3]<<endl;

    return 0;
}