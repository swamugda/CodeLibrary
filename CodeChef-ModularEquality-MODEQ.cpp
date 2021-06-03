#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,count=0;
        cin>>n>>m;
        vector<long long> mod(n+1,1);
        for(ll i=2;i<=n;i++)
        {
            ll x=m%i;
            count += mod[x];
            for(ll j=x;j<=n;j+=i)
            {
                mod[j]++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
