#include<stdio.h>
 int modify(int *);
 int main()
 {
     int a[10],i;
     int *p;

     printf("enter a numbers");

     for(i=0;i<10;i++)
        scanf("%d",&a[i]);

     p=modify(a);

     printf("\nmain array is:\n");
     for(i=0;i<10;i++)
        printf("%d ",*(p+i));


 }
 int modify(int *j)
 {
     int i;
     printf("modified array is:\n");
     for(i=0;i<10;i++)
     {
         j[i]*=3;
          printf("%d   ",j[i]);

     }
     return j;
 }
