#include<stdio.h>
int main(){
  int i,pos,inp,limit;
  printf("Enter the Limit");
  scanf("%d",&limit);
  int num[limit];
  printf("Enter the %d Elements",limit);
  for (i=0;i<limit;i++){
    printf("\nEnter the element :");
    scanf("%d",&num[i]);
  }
  printf("\nEnter the element to search :");
  scanf("%d",&inp);
  for(i=0;i<limit;i++){
    if(num[i]==inp){
      printf("\n Key Found !\nPosition is : %d\n",i+1);
      }
  }
return 0;
}
      
