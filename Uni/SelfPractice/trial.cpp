#include<iostream>
using namespace std;
void print(int arr[], int n)
{
cout <<"{";
for (int i = 0; i < n; i++) {
if (i + 1 != n)
{
cout << arr[i] ;
cout<<",";
}
else
cout << arr[i];
}
cout << "}";
}

int main(){
int arr[10]={3,2,1,1,5,7,4,2,69,420};   
print(arr,10) ;
    return 0;
}