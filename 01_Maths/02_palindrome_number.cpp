#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int reverse = 0 ;
    int temp = n ;
    
    while( temp != 0 )
    {
        int lastdigit = n % 10 ;
        reverse = reverse * 10 + lastdigit ;
        temp = temp / 10 ;
    }
    
    return ( reverse == n);
}

int main()
{
    int n;
    cin >> n;
    
    cout<<palindrome(n);
}