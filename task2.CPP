#include<iostream>
using namespace std;
int length;

void MakeArray(){
    cout<<"Enter d length for the 1d array ="<<endl;
    cin>>length;
    cout<<"Enter d values="<<endl;
    for(int i=0;i<length;i++)
        {
        cin>>array[i];
        }
    cout<<"Array created"<<endl;
}
void DisplayArray(){
for (int i=0;i<length;i++)
    {
    cout<<array[i]<<", ";
    }
cout<<"]";
}
void DeleteValues(){
    cout<<"Enter the Index Number To Delete Value :";
    int index;
    cin>>index;
    if(index <0 ||index > length)
    {
        cout<<"Invalid Index Entered-> Valid Range(0-9)"<<endl;
        DeleteValues();// Recall The Function it self
    }
    else
    {
        array[index]=-1;
    }
    cout<<"\n\t\t\tArray Value Deleted...  Successfully "<<endl;
}
int main()
{int sum=0;
int arr[]={1,5,2,2,6,8,9,0};
int max=arr[0];
int min=arr[0];

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



cout<<"*******************************"<<endl;
//iii.	Insert and delete an element in an array (by passing array to the function)
cout<<"(ii)Third Part starts"<<endl;
cout<<"The 1d array is as follows \t="<<"[";
for (int i = 0; i < len; i++)
{
    cout<<arr[i]<<", ";
}
cout<<"]";




    





return 0;
}