#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n][n];
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin>> arr[i][j];
    }

    //transpose
    {
        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
                swap(arr[i][j], arr[j][i]);
    }

    //reverseColumns
    {
    for (int i = 0; i < n; i++)
        for (int j = 0, k = n - 1; j < k; j++, k--)
            swap(arr[j][i], arr[k][i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << '\n';}
	return 0;
}
