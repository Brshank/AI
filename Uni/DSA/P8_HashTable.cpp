#include<iostream>
#include<limits.h>
 
using namespace std;
  
void Insert(int ary[],int hFn, int Size){
    int element,pos,n=0;
 
cout<<"Enter key element to insert\n";
cin>>element;
 
pos = element%hFn;
 
while(ary[pos]!= INT_MIN) {  // INT_MIN and INT_MAX indicates that cell is empty. So if cell is empty loop will break and goto bottom of the loop to insert element
if(ary[pos]== INT_MAX)
            break;
pos = (pos+1)%hFn;
n++;
if(n==Size)
            break;      // If table is full we should break, if not check this, loop will go to infinite loop.
}
 
if(n==Size)
        cout<<"Hash table was full of elements\nNo Place to insert this element\n\n";
else
        ary[pos] = element;    //Inserting element
}
  
void Search(int ary[],int hFn,int Size){
int element,pos,n=0;
 
cout<<"Enter element you want to search\n";
cin>>element;
 
pos = element%hFn;
 
while(n++ != Size){
if(ary[pos]==element){
cout<<"Element found at index "<<pos<<"\n";
break;
}
else
            if(ary[pos]==INT_MAX ||ary[pos]!=INT_MIN)
                pos = (pos+1) %hFn;
}
if(--n==Size)
        cout<<"Element not found in hash table\n";
}
 
void display(int ary[],int Size){
int i;
 
cout<<"Index\tValue\n";
 
for(i=0;i<Size;i++)
        cout<<i<<"\t"<<ary[i]<<"\n";
}
 
int main(){
int Size,hFn,i,choice;
 
cout<<"Enter size of hash table\n";
cin>>Size;
 
int ary[Size];
 
    cout<<"Enter hash function [if mod 10 enter 10]\n";
cin>>hFn;
 
for(i=0;i<Size;i++)
        ary[i]=INT_MIN; //Assigning INT_MIN indicates that cell is empty
 
do{
cout<<"Enter your choice\n";
cout<<" 1-> Insert\n 2-> Delete\n 3-> Display\n 4-> Searching\n 0-> Exit\n";
cin>>choice;
 
switch(choice){
case 1:
Insert(ary,hFn,Size);
break;
case 2:
Delete(ary,hFn,Size);
break;
case 3:
display(ary,Size);
break;
case 4:
Search(ary,hFn,Size);
break;
default:
cout<<"Enter correct choice\n";
break;
}
}while(choice);
 
return 0;
}
 