#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,c,d,root1,root2,realpart,imagepart;
    printf("enter the coefficient of a,b,c,\n");
    scanf("%f %f %f",&a,&b,&c);
    
    if(a*b*c==0)
    {
        printf("enter non zero number \n");
        exit(0);
    }
    d=b*b-4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("roots are real and defferent\n");
        printf("root1=%.2lf\nroot2=%.2lf\n",root1,root2);
        
    }
    else if (d==0)
    {
        root1=root2=-b/(2*a);
        printf("roots are real and equal\n");
        printf("root1=%.2lf\nroot2=%.2lf\n",root1,root2);
        
    }
    else
    {
        realpart=-b/(2*a);
        imagepart=sqrt(-d)/(2*a);
        printf("roots are rel and complex\n");
        printf("root1=%.2f + %.2f i\n root2 = %.2f + %.2f i\n",realpart,imagepart,realpart,imagepart);
    }
}