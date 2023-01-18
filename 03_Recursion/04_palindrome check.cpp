#include<bits/stdc++.h>
using namespace std;

bool palindromecheck(string str ,int start , int end)
{
    if(start >= end)
    {
        return true;
    }
    
    if(str[start] != str[end] )
    {
        return false;
    }
    
    return palindromecheck(str , start+1 , end-1);
}

int main()
{
    string str ;
    getline(cin , str) ;
    
    cout << palindromecheck(str , 0 , str.length()-1);
    
    return 0 ;
}