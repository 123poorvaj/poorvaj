#include<stdio.h>
struct complex
{
    int real;
    int image;

};
int main()
{   
    struct complex c1,c2,sum;
    printf("enter a real and imaginary number of c1>> \n");
    scanf("%d %d",&c1,&c1);
    printf("enter a real and imaginary number of c2>> \n");
    scanf("%d %d",&c2,&c2);
    sum.image=c1.image+c2.image;
    sum.real=c1.real+c2.real;
    printf("sum = %d + %d i \n",sum.real,sum.image); 
 
}