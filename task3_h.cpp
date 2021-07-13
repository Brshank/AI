#include<iostream>
#include<conio.h>
using namespace std;

class GrayscaleImage
{   private:
    int image[100][100];
    int row,col;

    public:
    GrayscaleImage(int nrows,int ncols)
    {   row=nrows;
        col=ncols;
        image[nrows][ncols]=0;      //sets all pixels to 0
    }
    int width()         //returns row size of the input matrix
    {
        return col;
    }
    int height()       //returns column size of the input matrix
    {
        return row;
    }
    void clear(int value)
    {
        if (value<=255 || value>=0)
        {
            for(int i=0;i<row;i++)
            {
                for(int j =0;j<col;j++)
                {
                    image[i][j]=value;
                }
            }
        }
        else if(value>255)
        {
            for(int i=0;i<row;i++)
            {
                for(int j =0;j<col;j++)
                {
                    image[i][j]=255;                         //sets the max value as 255
                }
            }
        }
        else
        {
            for(int i=0;i<row;i++)
            {
                for(int j =0;j<col;j++)
                {
                         
                    image[i][j]=0;                      //sets the min value as 0
                }
            }
        }
    }
    int getItem(int r,int c)
    {
     if(r>width() && c>height()){
        cout<<"Row Or Column Exceeds the given Value ";
        return -1;
    }
    else if (r<0 && c<0){
        cout<<"Row Or Column Can't be Less Than Zero ";
        return -1;
    }
    
    else{
        return image[r][c];}             
    }
    void setItem(int r,int c,int value)
    {   if(r>width() && c>height()){
        cout<<"\n\n\nRow and Column Exceeds the given Value ";
        }
         else if (r<0 && c<0){
        cout<<"Row Or Column Can't be Less Than Zero ";
        
        }
        if (value<=255 && value>=0)
        {
            image[r][c]=value;          
        }
        else if(value>255)
        {
            image[r][c]=255;
        }
        else
        {
            image[r][c]=0;
        }
    }
    void display()
    {   cout<<"\n\n The Matrix is=\n\n";
        for(int i=0;i<row;i++)
            {
                for(int j =0;j<col;j++)
                {
                    cout<<image[i][j]<<" ";
                }
                cout<<endl;
            }

    }


};

int main()
{
    GrayscaleImage img(5,5);
    img.display();
    cout<<endl;
    // cout<<"The image width is "<<img.width()<<endl;
    // cout<<"The image height is "<<img.height()<<endl;
    
    // img.clear(77);
    // img.display();

    // cout<<"Image at this pixel is"<<img.getItem(3,3)<<endl; // will return the value at the particular index    PASS
    // cout<<"Image at this pixel is"<<img.getItem(-2,-2)<<endl; // will return the value at the particular index  PASS
    // cout<<"Image at this pixel is"<<img.getItem(8,8)<<endl;  //will recieve error on purpose                    FAIL
    img.setItem(3,3,69);
    img.display();
    img.setItem(3,3,-300); // Will automatically suppress the value at put the min
    img.display();
    img.setItem(3,3,300); // Will automatically suppress the value at put the max
    img.display();
    
}