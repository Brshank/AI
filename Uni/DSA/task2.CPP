#include<iostream>
using namespace std;


int main()
{
int sum=0;
int max=arr[0];
int min=arr[0];
int arr[]={1,5,2,2,6,8,9,0};
int len = (sizeof(arr)/sizeof(arr[0]));

for (int i = 0; i < len; i++)
{
    if (arr[i] > max){
      max=arr[i];  
    }
    if (arr[i] < min){
      min=arr[i];  
    }
sum+=arr[i];    
}

cout<<"*******************************"<<endl;
//Finding the sum and average of the array
cout<<"(i)First Part starts"<<endl;
cout<<"The sum of the 1d array \t="<<sum<<endl;
cout<<"The average of the 1d array \t="<<(sum/len)<<endl;


cout<<"*******************************"<<endl;
//Finding the highest and lowest number in the array
cout<<"(ii)Second Part starts"<<endl;
cout<<"The max number of the 1d array \t="<<max<<endl;
cout<<"The min number of the 1d array \t="<<min<<endl;

return 0;
}