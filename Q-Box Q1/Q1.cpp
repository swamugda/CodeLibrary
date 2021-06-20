#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void banana(long long a[],long long n)
{
    long long bob=0, kevin=0;
    long long p1=0,p2=n-1; //p1 is bob's position; p2 is kevin's position
    long long flag=0, move=1, ncopy=n, prevbob=0, prevkevin=0;

    while(ncopy>0)
    {
        flag=0;
        if(move==1)
        {
            prevbob=0;
            while(flag==0 && ncopy>0)
            {
                bob+=a[p1];
                prevbob+=a[p1];
                p1++;
                ncopy--;
                if(prevbob > prevkevin){
                    flag=1;

                }
            }
            move=-1;
        }
        else
        {
            prevkevin=0;
            while(flag==0 && ncopy>0)
            {
                kevin+=a[p2];
                prevkevin+=a[p2];
                p2--;
                ncopy--;
                if(prevkevin > prevbob){
                    flag=1;
                }
            }
            move=1;
        }
    }
    cout<<bob<<" "<<kevin<<" ";
    if(bob>kevin)
        cout<<"Bob\n";
    else
        cout<<"Kevin\n";

}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        banana(a,n);
    }
}
