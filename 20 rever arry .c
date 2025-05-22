#include<stdio.h>
int main(){
  int arr[]={0,1,2,3,4} ,size=5;
  for (int i = 0; i <size/2; i++)
  {
    int tem;
    tem=arr[i];
    arr[i]=arr[size-1-i];
    arr[size-i-1]=tem;
  }
  
  
  for(int i=0;i<size;i++)
  {
    printf("%d \n",arr[i]);

  }
}
