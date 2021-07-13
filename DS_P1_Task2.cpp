#include <iostream>
#include<string>
#include "DS_P1_Task2.h"


using namespace std;


int main()
{
    node a;
    
    char answer='y';
    while (tolower(answer) !='n')
    {
        int number;
        cout<<"Enter a Number ="<<endl;
        cin>>number;
        a.insertValue(number);
        cout<<"Do You Want to enter more numbers?(y/n):"<<endl;
        cin>>answer; 

    }

    cout<<"The Array is "<<endl;
    cout << a.to_str() << endl;
    a.InsertatIndex(3, 77);
    cout<<"Inserted '77' at index '3'"<<endl;
    cout << a.to_str() << endl;
    a.deleteValueAtIndex(3);
    cout<<"Deleted the value at index '3'"<<endl;
    cout << a.to_str() << endl;
  
}