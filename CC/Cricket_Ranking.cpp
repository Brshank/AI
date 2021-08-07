#include<iostream>
using namespace std;
class Cricket_Ranking
{
    public:
    int arra[3]; // player a
    int arrb[3]; //player b 
    int suma=0;
    int sumb=0;
    int count=0;
    void CR()
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

    }
void Compare()
{
     for(int i=0;i<3;i++){
        if(arra[i]>arrb[i])
        count++;
        }
        if(count>1)
        cout<<'A'<<endl;
        else
        cout<<'B'<<endl;
        
}

};

int main()
{
    unsigned int x;
    cin>>x;
    Cricket_Ranking comp[x];
    for (int i = 0; i < x; i++)
    {
        comp[i].CR(); //components p[layeres]
        
    }
    for (int r = 0; r < x; r++)
    {
        comp[r].Compare();
    }
    
    return 0;
}