#include<stdio.h>

void shift(int q[4][5]);
int main()
{
    int a[4][5],i,j;

    printf("enter array\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        scanf("%d",&a[i][j]);
    }
     for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }

    shift(a);

}
void shift(int q[4][5])
{
    int i,j,a[4][5];
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        a[i][j]=q[i][(j+2)%5];
    }
        printf("shifted matrix is\n");
 for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}
