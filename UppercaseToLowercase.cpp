#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char UppertoLower(char c)
{
    c = c | 32;
    return c;
}

int main()
{
    cout<<"Enter uppercase character: ";
    char c;
    cin>>c;
    c=UppertoLower(c);
    cout<<endl<<"Lowercase is: "<<c<<endl;
}
