#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count_bits(int x)
{
    int count=0;
    if(x==0)
        return 0;
    while(x)
    {
        if(x & 1)
            count++;
        x=x>>1;
    }
    return count;
}

main()
{
    int x =count_bits(5);
    cout<<x;
}
