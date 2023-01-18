#include<bits/stdc++.h>
using namespace std;

int naturalsum(int n)
{
    if(n == 0)
    {
        return 0 ;
    }
    
    return n + naturalsum(n-1) ;
}

int main()
{
    int n ;
    cin >> n ;
    
    cout << naturalsum(n);
    
    return 0 ;
}