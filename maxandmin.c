#include<stdio.h>
int main(){
  int lim,i,large,small;
  printf("\nEnter the Limit");
  scanf("%d",&lim);
  int num[lim];
  printf("Enter the %d Elements",lim);
  for (i=0;i<lim;i++){
    printf("\nEnter the element :");
    scanf("%d",&num[i]);
  }
  for (i=0;i<lim;i++){
    if(num[i]>large){
      large=num[i];
    }
  }
  small=large;
  for(i=0;i<lim;i++){
    if(num[i]<small){
      small=num[i];
    }
  }
printf("\nLargest element is %d",large);
printf("\nSmallest Element is %d",small);
return 0;
}
