#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double q,a,d,n,x,r=0;

double s(double r)
{
  double result = 0;
  double x = 1; // r^0 is always 0
  for (int k = 1; k <= n; k++)
  {
#ifdef SLOW
    result += (a - d * k) * pow(r, k - 1);
#else
    result += (a - d * k) * x;
    x *= r;
#endif
  }
  return result;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    double lower,upper,current,mid;
    
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>a>>d>>n>>x;
        lower=0;
        upper=2;
        while (upper - lower > 0.0000000000001)
        {
            mid = (upper + lower) / 2;
            // find result at midpoint
            current = s(mid);

            if (current < -x)
            upper = mid;
            else
            lower = mid;
        }
        std::cout << std::fixed << std::setprecision(12) << (upper + lower) / 2 << std::endl;
    }
    
    return 0;
}
