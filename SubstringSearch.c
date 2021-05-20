#include<stdio.h>
#include<string.h>

int main()
{
    char s[50],sub[20];
    printf("Enter the string:");
    gets(s);
    printf("\nEnter substring to be searched:");
    gets(sub);

    int count1,count2,i,j;
    count1=strlen(s);
    count2=strlen(sub);

    for(i=0;i<=count1-count2;i++)
    {
        for(j=0;j<count2;j++)
        {
            if(s[i+j]!=sub[j])
                break;
        }
        if(j==count2)
            printf("Substring found at index %d\n",i);
    }
}

