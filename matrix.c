#include<stdio.h>
void display(int q[3][3]);

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("enter first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }

    printf("enter second matrix\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }


    printf("matrix A is:\n");
    display(a);
    printf("matrix B is:\n");
    display(b);

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];
    }

    printf("dum of A & B is:\n");
    display(c);


     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
    }

    printf("multiply of A & B is:\n");
    display(c);

      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            c[i][j]=a[i][0]*a[0][j]+a[i][1]*a[1][j]+a[i][2]*a[2][j];
    }

    printf("square of A is;\n");
    display(c);



}
void display(int q[3][3])
{
    int i,j;

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",q[i][j]);
         printf("\n");
    }
}

