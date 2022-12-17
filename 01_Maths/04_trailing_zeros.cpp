#include<bits/stdc++.h>
using namespace std;

int trailingzero(int n)
{
    int ans = 0 ; 
    for(int i = 5 ; i <= n ; i*=5)
    {
        ans += n/i;
    }
    return ans ; 
}

int main()
{
    int n;
    cin >> n;
    
    cout<<trailingzero(n);
}