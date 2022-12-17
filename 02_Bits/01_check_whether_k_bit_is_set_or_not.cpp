#include<bits/stdc++.h>
using namespace std;

bool checkforkbit(int n , int k)
{
    int res = 1 << k-1;
    
    if(n & res)
    {
        return true ;
    }
    return false ;
}

int main()
{
    int n ;
    cin >> n ;
    
    int k ;
    cin >> k ;
    
    cout << checkforkbit(n,k);
    
    return 0 ;
}