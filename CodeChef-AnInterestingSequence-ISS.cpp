#include <iostream>
#include <algorithm>
using namespace std;

long int gcd(long int a,long int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
	// your code goes here
	long int T,k;
	cin>>T;
	while(T--)
	{
	    cin>>k;
	    long int a[2*k+1],sum=0;
	    for(long int i=1;i<=(2*k)+1;i++)
	    {
	        a[i]=k+ (i*i);
	    }
	    for(long int i=1;i<(2*k)+1;i++)
	    {
	        sum = sum + __gcd(a[i],a[i+1]);
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}

