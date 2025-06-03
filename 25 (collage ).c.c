#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
    printf("enter row and coumns for frist matrix\n");
    scanf("%d %d ",&m,&n);
    printf("enter the frist matrix elements\n");
    for (i=0;i<m;i++);
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second order elements");
    for (i=0;i<p;i++)
    {
        for(j=0;j<q;j++);
        {
            scanf("%d ",&b[i][j]);
        }
    }

printf("first order matrix is \n");
for(i=0;i<m;i++);
{
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("second order matrix is");
for(i=0;i<p;i++);
{
    for(j=0;j<q;j++);
    {
        printf("%d\t",b[i][j]);

    }
    printf("\n");
}
if (n!=p)
{
printf("matrix can not maltiply");

}
else{
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);

            }
            c[i][j]=sum;

        }
    }
    printf("maltiplication is\n" );
    for (i=0;i<q;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
return 0;

}