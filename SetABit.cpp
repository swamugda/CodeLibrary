#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int set_bit(int x,int index)
{
    int i=1;
    i = i<<index;
    x = x|i;
    return x;
}

main()
{
    int x = set_bit(5,1);
    cout<<x;
}


