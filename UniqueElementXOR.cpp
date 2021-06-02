#include <iostream>
using namespace std;

int findSingle(int a[], int n)
{
    int result = a[0];
    for (int i = 1; i < n; i++)
        result = result ^ a[i];
    return result;
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
    cout << "Element occurring once is "<< findSingle(a, n);
    return 0;
}

