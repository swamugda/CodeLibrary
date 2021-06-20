#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count_bits(int x)
{
    int count=0;
    if(x==0)
        return 1;
    while(x)
    {
        if(!(x & 1))
            count++;
        x=x>>1;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<endl<<"No of patterns of kind n+x=n^x are: "<<pow(2,count_bits(n))<<endl;
}
