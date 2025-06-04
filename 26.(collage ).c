#include<stdio.h>
struct student
{
    char usn[15];
    char name[30];
    float m1,m2 ,m3,avg,total;
};
int main()
{
   struct student s[20];
   int i ,n;
   printf("enter the number of student");
   scanf("%d",&n);

   for (i=0;i<n;i++)
   {
     printf(" enter the detail of %d sudent\n",i+1);
     printf("enter USN\n");
     scanf("%s",s[i].usn);
     printf("enter name\n");
     scanf("%s",s[i].name);
     printf("enter the 3 subject marks \n");
     scanf("%f %f %f ",&s[i].m1,&s[i].m2,&s[i].m3);
     s[i].total=s[i].m1+s[i].m2+s[i].m3;
     s[i].avg=s[i].total/3;

   }
   for (i=0;i<n;i++);
   {
    if(s[i].avg>=35)
    printf("%s has score above the avrage marks  that is  %f \n ",s[i].name,s[i].avg);
    else
    printf("%s has scored below the avrage marks  that is %f \n",s[i].name,s[i].avg);
   }
}