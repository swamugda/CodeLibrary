#include<iostream>
#include<cmath>
using namespace std;
int fib(int n)
{
    double p = (1 + sqrt(5)) / 2;
    return round(pow(p, n) / sqrt(5));
}
int main ()
{
    int n;
    cin>>n;
    std::cout << fib(n) << std::endl;
    return 0;
}

