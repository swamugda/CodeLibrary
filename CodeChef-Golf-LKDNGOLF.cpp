#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void fastscan(long long int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register long long int c;

    number = 0;

    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;

        // extract the next character from the buffer
        c = getchar();
    }

    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;

    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

int main() {
	// your code goes here
	long long int T,N,x,k,i;
	fastscan(T);
	while(T--)
	{
	    fastscan(N);
	    fastscan(x);
	    fastscan(k);
	    /*
	    long long int a[N];
	    a[0]=0;
	    for(i=1;i<N;i++)
	    {
	        a[i]=i*k;
	    }
	    for(i=0;i<N;i++)
	    {
	        if(a[i]==x)
	            break;
	    }
	    */
	    long long int s=(N+1)%k;
	    if(x%k ==0 || x%k==s) cout<<"YES\n";
	    //if(i<N) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
