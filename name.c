#include<stdio.h>
int main(){
  char name[20];
  printf("\nEnter a name :");
fgets(name,sizeof(name),stdin);
  printf("\nWelcome %s",name);
  return 0;
}

