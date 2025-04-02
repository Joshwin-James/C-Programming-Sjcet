#include<stdio.h>
struct student{
  char name[30];
  int rollno;
  float cprgm;
  float python;
  float maths;
};
int main(){
  int n,total,avg;
  printf("Enter the number of Students\n");
  scanf("%d",&n);
  struct student s[n];
  for(int i=0;i<n;i++){
    printf("\nEnter the name ");
    scanf("%s",s[i].name);
    printf("\nEnter the Roll No ");
    scanf("%d",&s[i].rollno);
    printf("\nEnter the Mark in C Programing ");
    scanf("%f",&s[i].cprgm);
    printf("\nEnter the Mark in Python ");
    scanf("%f",&s[i].python);
    printf("\nEnter the Mark in Maths ");
    scanf("%f",&s[i].maths);
  }
  for(int i=0;i<n;i++){
    total+=s[i].cprgm+s[i].python+s[i].maths;
 }
avg=total/n;
printf("The total mark is %d",total);
printf("The avarage mark is %d",avg);
  return 0;
}
