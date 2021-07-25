#include<iostream>
#include<cstring>
#include<cctype>
#include<stdlib.h>
using namespace std;
int CheckPalindrome(string s)
{
    int size =s.length();
    for (int i = 0; i < size; i++)
    {
        if (s[i] != s[size-i-1] )
        {
            return false;
        }
        
    }
        return true;
    
}

int main(){
    string word;
    cout<<"input a word to check for palindromABILITY::"<<endl;
    cin>>word;
    // word=word.tolower(word) ;
    if (CheckPalindrome(word)==true){
        cout<<"the word IS a palindrome!";}
    else{
        cout<<"the word is NOT a palindrome!";}
    return 0;
//race(ca!r
}
