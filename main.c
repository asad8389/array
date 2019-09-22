#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[4],i,j;
    int b[4];
    static int min;

    printf("enter a array\n");

    for(i=0;i<4;i++)
        scanf("%d",&a[i]);


     min=a[0];

     for(i=0;i<4;i++)
     {
         if(a[i]<min)
            min=a[i];
     }



         printf("min is %d\n",min);


 printf("b array is:\n");

    for(j=0,i=3;j<4;j++,i--)
            printf("%d  ",b[j]=a[i]);

}
