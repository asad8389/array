#include<stdio.h>
void display(int q[5][5]);
int main()
{
    int max,b[5][5],a[5][5],i,j;

    printf("enter\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("matrix is;\n");
    display(a);

    max=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

                b[i][j]=a[j][i];
        }
    }
    printf("transpose is;\n");

    display(b);
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
                if(a[i][j]>max)
                    max=a[i][j];
        }
    }


    printf("largest is %d",max);
}
void display(int q[5][5])
{
    int i,j,*a;

    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
            printf("%d ",q[i][j]);
        printf("\n");
    }

}
