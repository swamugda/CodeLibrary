// C++ program to count inversions using Binary Indexed Tree
#include<bits/stdc++.h>
using namespace std;

long int getSum(long int BITree[], long int index)
{
    long int sum = 0;
    while (index > 0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}

void updateBIT(long int BITree[], long int n, long int index, long int val)
{
    while (index <= n)
    {
    BITree[index] += val;
    index += index & (-index);
    }
}

void convert(long int arr[], long int n)
{
    long int temp[n];
    for (long int i=0; i<n; i++)
        temp[i] = arr[i];
    sort(temp, temp+n);
    for (long int i=0; i<n; i++)
    {
        arr[i] = lower_bound(temp, temp+n, arr[i]) - temp + 1;
    }
}

long int getInvCount(long int arr[], long int n)
{
    long int invcount = 0;
    convert(arr, n);
    long int BIT[n+1];
    for (long int i=1; i<=n; i++)
        BIT[i] = 0;

    for (long int i=n-1; i>=0; i--)
    {
        invcount += getSum(BIT, arr[i]-1);
        updateBIT(BIT, n, arr[i], 1);
    }

    return invcount;
}


int main()
{
    long int T, n,c=0;
    cin>>T;
    while(T--)
    {
        cin>>n;
        long int arr[n];
        for(long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        c=getInvCount(arr,n);
        if(c>=n)
        {
            cout<<c<<endl<<"YES"<<endl;
        }
        else
        {
            cout<<c<<endl<<"NO"<<endl;
        }
    }
    return 0;
}
