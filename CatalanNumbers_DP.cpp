#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void catalan(int n)
{
    int cat[n+1];
    memset(cat,0,sizeof(cat));
    cat[0]=1;
    cat[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cat[i] += cat[j] * cat[i-j-1];
        }
    }
    for(int i=0;i<=n;i++)
    {
        cout<<cat[i]<<"\t";
    }
}

int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;
    catalan(n);
}
