#include <iostream>
using namespace std;

int DuplicateNumber(int arr[], int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans= ans ^ arr[i] ^ i;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a[n];
    cout<<"\nEnter array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout << "Duplicate Element is "<< DuplicateNumber(a, n);
    return 0;
}

