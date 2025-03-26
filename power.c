#include<stdio.h>
int power(int n,int p){
  if (p==0){
    return 1;
  }else{
  return n*power(n,p-1);
  }
}
int main(){
int n,p,result;
printf("Enter the base ");
scanf("%d",&n);
printf("Enter the Exponent ");
scanf("%d",&p);
result=power(n,p);
printf("The result is %d",result);
return 0;
}
