#include <stdio.h>

int main() {
    int  b=1,num;
    printf("enter a value of num\n");
    scanf("%d",&num);            
    while(b<=90)
    {
        printf("num=%d\n",num);
        printf("b=%d\n",b);
        b++;
        num++;
        if(num==80){
             printf("queen\n"); //queen comse only once that time is num is equal to 80 
             break;
        }
        if(num>69){                   
           printf("king is back\n");    //king is comes after num is greate than 69 
           continue;
           
         
        }
    }
    

    return 0;
}