#include<stdio.h>
int main(){
  int n1,fact=1;
  printf("\nEnter the Number");
  scanf("%d",&n1);
  while (n1>0){
    fact=fact*n1;
    n1=n1-1;
  }
  printf("Factorial is : %d",fact);
return 0;
}
    
