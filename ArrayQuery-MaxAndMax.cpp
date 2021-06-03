#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

long int tmax, maxp, start, endp, beg;

void kadane(vector<long int> a, long int N)
{
    tmax=0; maxp=0; start=0; endp=-1; beg=0;
    for (long int i = 0; i < N; i++)
    {
        tmax = tmax + a.at(i);
        if (tmax < 0)
        {
            tmax = 0;
            beg = i + 1;
        }
        if (maxp < tmax)
        {
            maxp = tmax;
            start = beg;
            endp = i;
        }
    }
    if(endp!=-1)
        return;
    else
    {
        maxp=a.at(0);
        start=0;endp=0;
        for(long int i=1;i<N;i++)
        {
            if(a.at(i) > maxp)
            {
                maxp=a.at(i);
                start=i;endp=i;
            }
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int N,input,i;
    cin>>N;
    if(N<1 || N>1000000)
    {
        cout<<"0";
        exit(0);
    }
    vector<long int> a;
    for(i=0;i<N;i++)
    {
        cin>>input;
        a.push_back(input);
    }
    if(N==1)
    {
        cout<<a.at(0)<<endl<<"0";
        exit(0);
    }
    kadane(a,N);
    cout<<maxp<<endl;

    a.erase(a.begin()+start, a.begin()+endp+1);
    if(a.empty())
    {
       cout<<"0";
        exit(0);
    }
    N = N-(endp-start)-1;
    if(N<1 || N> 1000000)
    {
        cout<<"0";
        exit(0);
    }
    if(N==1)
    {
        cout<<a.at(0);
        exit(0);
    }
    kadane(a,N);
    cout<<maxp<<endl;
}
