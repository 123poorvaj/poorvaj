#include<stdio.h>
void main(){
int i,a[20],key,n,found=0,mid,low,high;
printf(" enter how many numbers you want stored in the arry \n ");
scanf("%d",&n);
printf("enter the elements or numbers  in the arry\n");
for ( i=0;i<n;i++);
{
scanf("%d",&a[i]);
}
printf("enter the element you want to serched in the arry\n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("%d this element is found in the arry on the potion %d",key,mid+1);
found=1;
break;
}
else if(key>a[mid])
{
low=mid+1;

}
else
{
high=mid-1;
}
}
if(found==1)
{
printf("enter the valied number\n");
}
}
