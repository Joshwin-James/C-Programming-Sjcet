/*Author Joshwin James
  Date 7-02-25
  Transpose of a matrix*/
#include<stdio.h>
int main(){
  int row,col,i,j,sum;
  printf("\n Enter the number of rows and columns  :");
  scanf("%d%d",&row,&col);
  int m1 [row][col];
  printf("\n Enter the matrix:\n");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    scanf("%d",&m1[i][j]);
      }
    }
  printf("\n Transpose of the matrix is :\n");
  for(i=0;i<col;i++){
      for(j=0;j<row;j++){
      printf("%d\t",m1[j][i]);
        }
      printf("\n");
    }
  return 0;
  }

      
