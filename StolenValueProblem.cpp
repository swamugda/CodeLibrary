//Rob Houses in a way to make maximum profit. But cannot rob two consecutive houses.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void StolenValue(int values[],int n);

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int values[n+1];
    values[0]=0; //ignore 0th index
    cout<<"Enter array elements: ";
    for(int i=1;i<=n;i++)
    {
        cin>>values[i];
    }
    StolenValue(values,n);
}

void StolenValue(int values[],int n)
{
    int sv[n+1];
    memset(sv,0,sizeof(sv));
    sv[0]=0;
    sv[1]=values[1];

    for(int i=2;i<=n;i++)
    {
        sv[i]=max(sv[i-2]+values[i],sv[i-1]);
    }
    for(int i=0;i<=n;i++)
    {
        cout<<sv[i]<<" ";
    }
}
