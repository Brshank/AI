#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

int size=37;
for (int i = 0; i < 4; i++)
    {
        int choice=rand()%size;
        // cout<<"The choice is ::"<<choice;
        cout<<"The "<<i<<"th choice is-:: "<<choice<<endl;

    }
    return 0;
}