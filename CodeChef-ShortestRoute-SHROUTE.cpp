#include <iostream>
#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

void solve(){
    long long i;
    long long n,m; cin>>n>>m;
    long long a[n];
    long long b[m];

    for (i=0;i<n;i++) {
        cin>>a[i];}
        for(i=0;i<m;i++){
        cin>>b[i];}

        long long max=1e9;
        map<long long,long long>mp;

           for(i=0;i<n;i++)  {
               if(i==0) mp[i]=0;
               else if (a[i]!=0) mp[i]=0;

               else mp[i]=max;

           }

          long long right=-1;
           for(i=0;i<n;i++) {
               if(a[i]==1) right=i;
               if(right!=-1) {
                   if(a[i]==0)
                   mp[i]=min(mp[i],i-right);
               }
               }

           long long left =-1;
            for(i=n-1;i>=0;i--) {
                if(a[i]==2) left=i;
                  if(left!=-1) {
                      if(a[i]==0)
                      mp[i] =min(mp[i],left-i);

                   }
               }
            for(i=0;i<m;i++){
                   long long j=b[i]-1;
                   if(mp[j]!=max)
                   cout<<mp[j]<<" ";
                   else
                  cout<< -1<<" ";
               }

           cout<<"\n";
}


int main() {
	// your code goes here

	long long t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
