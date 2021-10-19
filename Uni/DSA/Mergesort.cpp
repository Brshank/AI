#include<iostream>
using namespace std;
class MgSort
{
public:
void mergeSort(int a[], int low, int high) {
     //Function performs a mergeSort on an array for indices low to high
     int mid;
     //if more than 1 element in subarray
     if(low < high){
              mid =(low + high) / 2;
              //mergeSort left half of subarray
              mergeSort(a, low, mid);
              //mergeSort right half of subarray
              mergeSort(a, mid+1, high);
              //merge the 2 subarrays
              merge(a, low, mid, high);
              }
}



void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid-low+1;
    int n2 = high - mid;

    int a[n1];
    int b[n2];  //temporary arrays 

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[low+i];
    }

    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=low;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++; i++;
        }
        else
        {
            arr[k]=b[j];
            k++; j++;
        }
    }

    while(i<n1)
    {
        arr[k]=a[i];
        k++; i++;
    }

    while(j<n2)
    {
        arr[k]=b[j];
        k++; j++;
    }
}

};

int main()
{ 
     MgSort m;
    int arr[]={-8,5,1,0,5,26,47,10,99,23,32};
    m.mergeSort(arr,0,12);
    for(int i=0;i<11;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}