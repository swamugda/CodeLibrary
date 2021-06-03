#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>X>>A>>B;
	    cout<< (B*(100-X) + A ) *10<<endl;
	}
	return 0;
}

