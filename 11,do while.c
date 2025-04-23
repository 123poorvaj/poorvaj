//do while loop use to control the loop
//it is post-test loop and it also infinet loop.
//syntax
/*  do
    {
        code
        
     }while (condition);
    */


#include<stdio.h>
int main(){
    int a=0;
    do
    {
        printf("print %d times\n",a);
        a++;
    }while (a<10);
    
}