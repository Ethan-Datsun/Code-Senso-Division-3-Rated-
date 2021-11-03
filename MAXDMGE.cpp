#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n;i++)
        {
            if(i==0)
                cout<<(a[i]&a[i+1])<<" ";
            else if(i==n-1)
                cout<<(a[i]&a[i-1])<<" ";
            else
                cout<<max(a[i]&a[i-1],a[i]&a[i+1])<<" ";
                
        }
        cout<<"\n";
    
    }
	
	return 0;
}