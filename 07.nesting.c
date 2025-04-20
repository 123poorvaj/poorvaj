#include<stdio.h>
int main(){
    int a=60,b=80,c=100;
    if (a<b)
    {
      if(a>c) 
      {
        printf(" a is greater then c\n");
      }
      else{
        printf(" a is lesser then c\n");
      }
    }
    else if (c>a)
    {
        printf("c is greater than a\n");

    }
    
    else{
        printf("conditions are not sati\n");
    }
}
