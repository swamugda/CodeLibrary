#include<iostream>
using namespace std;

/*Recursively compute value for C(n,k) */
int BinomialCoef(int n,int k)
{
    if(k==0 || k==n)
        return 1;
    return BinomialCoef(n-1,k-1) + BinomialCoef(n-1,k);
}

int main()
{
    int n,k,result;
    cout<<"Enter n and k: ";
    cin>>n>>k;
    result=BinomialCoef(n,k);
    cout<<endl<<"Result: "<<result<<endl;
}
