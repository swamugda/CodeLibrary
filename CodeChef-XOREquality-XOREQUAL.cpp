#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long

ll powerof(ll x, ll y, ll p)
{
    ll r=1;
    x=x%p;
    if(x==0) return 0;
    while(y>0)
    {
        if(y&1)
            r = (r*x) %p;
        y=y>>1;
        x=(x*x)%p;
    }
    return r;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t,n,result;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    result = powerof(2,n-1,mod);

	    cout<<result<<"\n";

	}
	return 0;
}
