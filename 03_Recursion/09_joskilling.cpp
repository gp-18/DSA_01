#include<bits/stdc++.h>
using namespace std;

int joskilling (int n , int k)
{
    if( n == 1 )
    {
        return 0 ;
    }
    
    return (joskilling(n-1 , k) + k ) % n ;
    
    // + K so that the sequence of the no does not change at the time of new recursion call
    // % n so because so that the value does not exceed the no 
}

int main()
{
    int n ;
    cin >> n ;
    
    int k ;
    cin >> k ;
    
    // output for indexing starting from 0
    cout << joskilling(n , k)<<" ";
    
    // output for indexing starting from +1
    cout << joskilling(n , k) + 1 ;
}