#include<stdio.h>
int sumarray(int array[],int s){
  int sum=0;
  for(int i=0;i<s;i++){
    sum=sum+array[i];
    }
  return sum;
}
int main(){
int size,sum;
printf("Enter the size of array");
scanf("%d",&size);
int array[size];
printf("Enter the elements of array\n");
for(int i=0;i<size;i++){
  scanf("%d",&array[i]);
}
sum=sumarray(array,size);
printf("The sum is %d",sum); 
return 0;
}
