#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("\nEnter The First Number");
	scanf("%d",&n1);
	printf("\nEnter The second Number");
	scanf("%d",&n2);
	printf("\nEnter The Third Number");
	scanf("%d",&n3);
	if (n1>n2){
		if (n1>n3){
		  printf("\n%d Is The Largest",n1);
		}else{
		  printf("\n%d Is The Largest",n3);
		}
	}else{
	  if(n2>n3){
	    printf("\n%d Is the largest",n2);
	    }else{
	      printf("\n%d is the largest",n3);
	      }
      }
return 0;
}
