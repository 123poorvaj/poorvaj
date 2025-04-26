// what is function
//>> function is a block of code that presform a specific task. and it reduce the block of code.
// it contains deleration section ,defnition section, main function ,
//function as a two types that is library functions and  user diffined functions
/*library functions
  *these are all built-in functions provided by c libraries.
  *you can use them directly by including proper header file.
  examples:
           printf(),
           scanf(),
           sqrt() ,
  // user difined functions
  *these functions are create your self perform  spesific task.
  *they make your easier to read ,manag .
  // Online C compiler to run C program online
*/

#include<stdio.h>

int add(int num1,int num2){
    int sum;
    sum=num1 + num2;
    return sum;
}


int main() {
    int a, b,c;
    printf("enter value of a and b");
    scanf("%d %d", &a, &b);
    c=add(a,b);
    printf("sum of a and b = %d",c);
    return 0;
}




