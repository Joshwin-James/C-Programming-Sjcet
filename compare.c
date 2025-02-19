#include<stdio.h>
#include<string.h>
int main(){
  char str1[50],str2[50];
  printf("\nEnter the First String :");
  fgets(str1,sizeof(str1),stdin);
  printf("\nEnter the second String :");
  fgets(str2,sizeof(str2),stdin);
  if (strlen(str1)!=strlen(str2)){
    printf("\nStrings have different lengths");
    return 0;
  }
int cmp=strcmp(str1,str2);
if (cmp==0){
  printf("\nStrings are same");
} else{
  printf("\nstrings are different");
}
return 0;
}

