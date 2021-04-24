#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int unset_bit(int x,int index)
{
    int i=1;
    i = i<<index;
    x = x & (~i);
    return x;
}

main()
{
    int x = unset_bit(5,2);
    cout<<x;
}



