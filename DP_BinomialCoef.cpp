#include<iostream>
using namespace std;

/* Building a DP table using Combinations(n,k) */

void BinomialCoef(int n,int k)
{
    int C[n+1][k+1];
    int i,j;
    for(int i=0;i<=n;i++)
    {
        C[i][0]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=min(i,k);j++)
        {
            if(j==0 || j==i)
                C[i][j]=1;
            else
                C[i][j]=C[i-1][j-1]+C[i-1][j];
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,k);j++)
        {
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    int n,k;
    cout<<"Enter n and k: ";
    cin>>n>>k;
    BinomialCoef(n,k);

}
