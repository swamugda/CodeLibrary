#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x=0,y;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=1;i<=7;i++)
	    {
	        y=search(a,n,i);
	        if(y>x)
	            x=y;
	    }
	    cout<<x+1<<endl;
	}
	return 0;
}
