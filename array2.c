#include<stdio.h>
int main(){
  int row,col,i,j,sum;
  printf("\nEnter the number of rows and colums  :");
  scanf("%d%d",&row,&col);
  int array [row][col];
  printf("\nEnter the elements :");
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    scanf("%d",&array[i][j]);
      }
    }
  for(i=0;i<row;i++){
      for(j=0;j<col;j++){
      printf("%d\t",array[i][j]);
        }
      printf("\n");
    }
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      if (i==j){
        array[i][j]=0;
      }
    }
  }
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
    printf("%d\t",array[i][j]);
      }
    printf("\n");
  }
  return 0;
  }
