#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int NoOfSetBits(int x)
{
    int count=0;
    while(x)
    {
        x=x&(x-1);
        count++;
    }
    return count;
}
int main()
{
    cout<<"Enter x: ";
    int x,c;
    cin>>x;
    c=NoOfSetBits(x);
    cout<<endl<<"No of bits: "<<c<<endl;
}
