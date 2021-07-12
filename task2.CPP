#include<iostream>
using namespace std;

int arr[]={1,5,2,2,6,8,9,0};
int len = (sizeof(arr)/sizeof(arr[0]));

void InsertValues(){
  int n;
  int index;
  cout<<"Enter the Index Number To Insert Value into:";
  cin>>index;
  cout<<"Enter value of numerical to be inserted="<<endl;
  cin>>n;

  for (int i = len-1; i >= index; i--){
    arr[i+1]=arr[i];
    }
  arr[index]=n;
  
}

void DeleteValues()
{  
  cout<<"Enter the Index Number To Delete Value :";
  int index;
  cin>>index;
  
  if(index <0 || index > 7)
  {
    cout<<"Index inputted is out of range try(0-7)"<<endl;
    DeleteValues(); //for user to try Again
  }
  else
  {for (int i = index; i <len; i++){
    arr[i]=arr[i+1];
    }
    cout<<"after deletion"<<endl;   
    cout<<"[";
    //displaying
    for (int i = 0; i < len; i++) {
      cout<<arr[i]<<"  ";}
      cout<<"]";

  }
  cout<<"*@#\t Array Value Deleted\t*@#"<<endl;
}
int main()
{
int sum=0;
int max=arr[0];
int min=arr[0];

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
cout<<"(iii)Third Part starts"<<endl;

//************INSERTION 
InsertValues();

//**********DELETION
DeleteValues();

return 0;
}