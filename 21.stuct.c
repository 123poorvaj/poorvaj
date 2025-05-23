// Online C compiler to run C program on
#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    int marks;
    char name[20];
};
int main(){
  struct student s1;
  strcpy(s1.name,"poora");
  s1.roll_no=56;
  s1.marks=67;
  puts(s1.name);
  printf("%d\n", s1.roll_no);
  printf("\%d" ,s1.marks);
}