#include<stdio.h>
struct employee{
  char name[30];
  int id;
  float salary;
};
int main(){
  int n;
  printf("Enter the number of Employee\n");
  scanf("%d",&n);
  struct employee e[n];
  for(int i=0;i<n;i++){
    printf("\nEnter the name ");
    scanf("%s",e[i].name);
    printf("\nEnter the employee ID ");
    scanf("%d",&e[i].id);
    printf("\nEnter the salary ");
    scanf("%f",&e[i].salary);
  }
  for(int i=0;i<n;i++){
  printf("\nName :%s",e[i].name);
  printf("\nEmployee ID :%d",e[i].id);
  printf("\nSalary:%f\n",e[i].salary);
  }
  return 0;
}
    
