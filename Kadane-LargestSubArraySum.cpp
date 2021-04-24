#include<iostream>
using namespace std;

int kadane(int [],int);

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a[n];
    cout<<"Enter array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<<"Largest Sub Array Sum: "<< kadane(a,n)<<endl;
}

int kadane(int a[],int n)
{
    int maxi=0,tmax=0;
    for(int i=0;i<n;i++)
    {
        tmax += a[i];
        if(tmax<0)
            tmax=0;
        if(maxi<tmax)
            maxi=tmax;
    }
    return maxi;
}
