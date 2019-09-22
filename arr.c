#include<stdio.h>
#define ADD
int main()
{
    int a[25],i,x,count=0;

    printf("enter 25 no\n");
    for(i=0;i<25;i++)
        scanf("%d",&a[i]);

    printf("enter no to search\n");
    scanf("%d",&x);

    for(i=0;i<25;i++)
    {
        if(a[i]==x)
            {
                count++;
                printf("pos=%d\n",i);
            }

    }

    if(count==0)
        printf("no not found");
    else
        printf("found %d times",count);









}
