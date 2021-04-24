#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char LowertoUpper(char c)
{
    c = c & ~32;
    return c;
}

int main()
{
    cout<<"Enter lowercase character: ";
    char c;
    cin>>c;
    c=LowertoUpper(c);
    cout<<endl<<"Uppercase is: "<<c<<endl;
}
