#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findLIS(int n, int a[])
{
    int LIS[n];
    int i, j, maxlen=1;
    for(i=0; i<n; i++)
    {
        LIS[i]=1;
    }
    for(i=1; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[i]>a[j] && LIS[j]+1>LIS[i])
                LIS[i]=LIS[j]+1;
            if(maxlen<LIS[i])
                maxlen=LIS[i];
        }
    }
    return maxlen;
}

int main()
{
    int n, a[8], result;
    cin>>n;
    while(n--)
    {
        for(int i=0;i<8;i++)
            cin>>a[i];
        result = findLIS(8,a);
        if(result>=4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
