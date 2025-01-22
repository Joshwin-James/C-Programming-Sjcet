#include<stdio.h>
int main(){
  char val; 
  printf("\nEnter a caps letter :");
  val=getchar();
  val=val+32;
  printf("lower is :%c\n",val);
  return 0;
}
