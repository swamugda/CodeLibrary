#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int check_set_bit(int x,int index)
{
    x = x>>index;
    if(x&1)
        return 1;
    else
        return 0;
}

main()
{
    int x = check_set_bit(6,2);
    cout<<x;
}

