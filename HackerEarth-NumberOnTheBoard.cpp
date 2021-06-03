    #include<stdio.h>
    #include<math.h>
    using namespace std;

    int main()
    {
        float a,b,c,sum=1,n;
        int i;
        scanf("%f%f%f",&a,&b,&c);
        if(a>=0 && a<=1)
        {
            sum=log2(1+b*c);
        }
        else if(a>b)
        {
            sum=c* log2(a);
        }
        else if(a<b)
        {
            n = (1+b-a)/(b*(a-1));
            n = int(n) +1;
            sum = log2(1+n*b) + (c-n)*log2(a);
        }
        printf("%f\n",sum);
    }
