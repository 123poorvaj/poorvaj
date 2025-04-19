#include<stdio.h>
int main(){
    int choise,a=23,b=365;
    printf("enter a choise");
    scanf("%d",&choise);
    if (choise==1)
    {
        printf("sum of a and b=%d",a+b);
    }
    else{
        printf("your choise is wrong");
    }
}