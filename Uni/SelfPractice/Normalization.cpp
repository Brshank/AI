#include<iostream>
using namespace std;
class Solution
{
public:
int x,x1,prediction;
void First(int Start,int End){

cout<<"Please Give the Range==(Start,End)" << endl;
cout<<"Start=="<<endl;
cin>>Start;
cout<<"End=="<<endl;
cin>>End;

int x1;
cout<<"What lies inside this Range Given Above:="<<endl;
cin>>x1;

int x;
x=(x1-Start)/(End-Start);

}



void Predicted(int Start2,int End2){

cout<<"Please Give the Final Range ==(Start,End)" << endl;
cout<<"Start=="<<endl;
cin>>Start2;
cout<<"End=="<<endl;
cin>>End2;

float prediction=(x*(End2-Start2)) +Start2 ;


cout<<"So the Predicted number that will lie in the range is=="<<prediction<<endl;

}


};



int main(){
Solution S;
S.First(0,100);
S.Predicted(50,150);

    return 0;
}