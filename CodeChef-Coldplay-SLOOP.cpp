#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int T,M,S,result=0;
	cin>>T;
	while(T)
	{
	    T--;
	    cin>>M>>S;

	   result=floor(M/S);

	    cout<<result<<endl;
	}
	return 0;
}
