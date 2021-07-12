//DELETION
int index=3;
for (int i = index; i <len-1; i++){
    arr[i]=arr[i+1];
    }

cout<<"after deletion"<<endl;    
cout<<"[";
for (int i = 0; i < len-1; i++)
{
    cout<<arr[i]<<"  ";
}
cout<<"]";

