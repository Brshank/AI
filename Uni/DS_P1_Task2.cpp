#include <iostream>
#include<string>
#include "DS_P1_Task2.h"


using namespace std;


int main()
{   
    node a;
   int choice;

   while(choice!=5)
{   
   cout << "Menu\n1.Insert Value\n2.Insert at Index\n3.Delete at Index\n4.Print\n5.Exit\nChoice: ";
   cin>>choice;
	if(choice==1)
	{
		int number;
		cout << "Enter Number: ";
		cin >> number;
		a.insertValue(number);
	}
	else if(choice==2)
	{
		int index, number;
		cout << "Enter Index at which value will take place:";
		cin>>index;
		cout << "Enter Number to be inserted: ";
		cin>>number;
		a.InsertatIndex(index,number);
	}
	else if(choice==3)
	{
		int index;
		cout << "Enter Index: ";
		cin>>index;
		a.deleteValueAtIndex(index);
	}
	else if(choice==4)
	{   cout<<"The Array is=";
		cout << a.to_str();
	}
    cout<<"\n------------------------------\n";
}
cout<<"Program Has Ended Successfully";
exit(0);

}