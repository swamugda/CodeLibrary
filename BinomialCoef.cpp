#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/* A better method that uses just O(k) auxillary space to compute one row of pascals triangle */

void BinomialCoef(int n,int k)
{
    int C[k+1];
    int i,j;
    memset(C,0,sizeof(C));
    C[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=min(i,k);j>0;j--)
        {
            C[j]=C[j] + C[j-1];
        }
    }

    for(i=0;i<=k;i++)
        cout<<C[i]<<"\t";

}

int main()
{
    int n,k;
    cout<<"Enter n and k: ";
    cin>>n>>k;
    BinomialCoef(n,k);
}
