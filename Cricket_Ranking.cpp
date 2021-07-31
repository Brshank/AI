#include<iostream>
using namespace std;
class Cricket_Ranking
{
    public:
    int arra[3]; // player a
    int arrb[3]; //player b 
    int suma=0;
    int sumb=0;
    int x;
    void CR()
    { 
        cin>>x;
        for (int i = 0; i < x; i++)
        {
            for (int A = 0; A < 3; A++)
            {
                cin>>arra[A];
                suma+=arra[A];
            }
            
            for (int B = 0; B < 3; B++)
            {
                cin>>arrb[B];
                sumb+=arrb[B];
            }

            if (suma>sumb)
            {
               A-> matrix 
            }
            else
            {
                cout<< "B"<<endl;
            }
            suma=0;
            sumb=0;
            
        }
    
    }


};

int main(){
    Cricket_Ranking comp;
    comp.CR();
    return 0;
}