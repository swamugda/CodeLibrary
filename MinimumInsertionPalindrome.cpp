#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2);
int main()
{
    string s1;
    cout<<"Enter string: ";
    cin>>s1;
    string s2 = s1;
    reverse(s2.begin(),s2.end());
    int c=lcs(s1,s2);
    cout<<"Minimum insertions: "<<s1.length()-c;

}

int lcs(string s1,string s2)
{
    int lcs[s1.length()+1][s2.length()+1];
    int i,j;
    for(i=0;i<=s1.length();i++)
    {
        lcs[i][0]=0;
    }
    for(i=0;i<=s2.length();i++)
    {
        lcs[0][i]=0;
    }

    for(i=1;i<=s1.length();i++)
    {
        for(j=1;j<=s2.length();j++)
        {
            if(s1[i-1]==s2[j-1])
                lcs[i][j]= lcs[i-1][j-1] +1 ;
            else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
    return lcs[s1.length()][s2.length()];

}
