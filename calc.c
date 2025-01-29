#include<stdio.h>
int main(){
	int n1,n2,ans;
	char op;
	printf("\nEnter The First Number");
	scanf("%d",&n1);
	printf("\nEnter The second Number");
	scanf("%d",&n2);
	printf("\nChoose  the operator (+, -, *, /, %%)\n");
	scanf(" %c",&op);
	switch(op){
	  case '+':
	    ans=n1+n2;
	    printf("\n%d+%d=%d",n1,n2,ans);
	    break;
	  case '-':
	    ans=n1-n2;
	    printf("\n%d-%d=%d",n1,n2,ans);
	    break;
         case '*':
	    ans=n1*n2;
	    printf("\n%d*%d=%d",n1,n2,ans);
	    break;
	 case '%':
	    ans=n1%n2;
	    printf("\n%d %% %d=%d",n1,n2,ans);
	    break;
	 case '/':
	    ans=n1/n2;
	    printf("\n%d/%d=%d",n1,n2,ans);
	    break;
	
  
  }
return 0;
}
	
