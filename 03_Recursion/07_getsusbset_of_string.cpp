#include<bits/stdc++.h>
using namespace std;

void getsubsest(string str ,string curr , int i )
{
    if(i == str.length())
    {
        cout << curr << " " ;
        return ;
    }
    
    getsubsest(str , curr , i+1 );
    getsubsest(str , curr +str[i] , i+1 );
    
}

int main()
{
    string str ;
    getline(cin , str);
    
    int i = 0 ;
    getsubsest(str , " ", i);
    return 0 ;
}