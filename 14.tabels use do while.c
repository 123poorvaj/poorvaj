
#include<stdio.h>
int main(){
    int a=1,num;
    printf("enter the number\n");
    scanf("%d",&num);
    do
    {
        printf("%dx %d = %d\n",num,a,a*num);
        a++;
    }while(a<=10);
    

    return 0;
}