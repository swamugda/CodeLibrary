#include <cstdio>
#include <cmath>
#include<iostream>
using namespace std;

double f(double x,double b) {
  return floor(pow(2, b - x * x))/1e9;
}

int main() {
    double u,b;
    cin>>u>>b;
  for (int i = 1; i <= 1000; ++i) {
    u = f(u,b);
    
  }
  printf("%.9f\n", u + f(u,b));
  return 0;
}
