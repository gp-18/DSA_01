#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b)
{
    if(b == 0)
    {
        return a ;
    }
    return  gcd(b , a%b);
}

int lcm(int n , int m)
{
    int ans = 0 ;
    
    ans = n * m / gcd(n , m);
    
    return ans ;
}

// another way to direct find the lcm of two no 
// naive apporach

int lcmdirect(int n , int m)
{
    int res = max(n , m);
    
    while(true)
    {
        if(n%res ==0 && m%res ==0)
        {
            return res ;
        }
        res++;
    }
}
int main()
{
    int n;
    cin >> n;
    
    int m ;
    cin >> m ;
    
    cout << lcm( n ,  m)<<" ";
    cout << lcmdirect(n , m);
}