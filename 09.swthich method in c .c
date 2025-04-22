#include<stdio.h>
int main(){
    int a, b;
    int op;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf(" if you add  the a and b enter 1 \n");
    printf(" if you sud the a and b enter 2\n");
    printf(" if you divid the a and b enter 3\n ");
    printf("if you  malti the a and b enter 4 \n");
    scanf("%d",&op);
    switch (op)
    {

    case 1:
       printf("a+b=%d \n",a+b);
       break;
    case 2:
       printf("a-b=%d \n",a-b);
       break;
    case 3:
       printf("a/b=%d \n",a/b);
       break;
    case 4:
       printf("a*b=%d \n",a*b);
       break;
    default:
       printf("invalid option\n");
       break;
    }
    return 0;


}#include<stdio.h>
int main(){
    int a, b;
    int op;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf(" if you add  the a and b enter 1 \n");
    printf(" if you sud the a and b enter 2\n");
    printf(" if you divid the a and b enter 3\n ");
    printf("if you  malti the a and b enter 4 \n");
    scanf("%d",&op);
    switch (op)
    {

    case 1:
       printf("a+b=%d \n",a+b);
       break;
    case 2:
       printf("a-b=%d \n",a-b);
       break;
    case 3:
       printf("a/b=%d \n",a/b);
       break;
    case 4:
       printf("a*b=%d \n",a*b);
       break;
    default:
       printf("invalid option\n");
       break;
    }
    return 0;


}