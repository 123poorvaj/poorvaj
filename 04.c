// swaping the value of a and b



#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf(" befor swaping a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping a=%d and b=%d\n",a,b);

}