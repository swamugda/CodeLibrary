#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,res=0;
    scanf("%d", &n);

    while(n>0)
    {

        res+=n%10;
        n=n/10;

    }
    printf("%d",res);
    return 0;
}
