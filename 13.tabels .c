#include<stdio.h>
int main(){
    int a=1,num;
    printf("enter the number\n");
    scanf("%d",&num);
    while(a<=10)
    {
        printf("%dx %d = %d\n",num,a,a*num);
        a++;
    }
    

    return 0;
}