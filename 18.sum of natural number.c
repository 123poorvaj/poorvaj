#include <stdio.h>


int main() {
    int c,n,sum=0;
    printf("enter the valu of n \n");
    scanf("%d",&n);
    for(c=0;c<=n;c++)
    {
        sum=sum+c;
        
    }                        
    printf("%d",sum);
    return 0;
}

//step 1: sum=0 ,        sum+c=0;
//step 2:sum=0,c=1;       sum+c=1  
//step 3: sum=1 ,c=2        sum+c=3
//step 4: sum=3 ,c=3        sum+c=6
// step 5: sum=6 ,c=4        sum+c=10
//step 6:sum=10,c=15         sum+c=15
 //step 7:sum=15,
 //condition break.
    