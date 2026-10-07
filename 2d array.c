#include<stdio.h>
int main(void){
    int rows=2,column=3;
    int matrix[2][3];
    printf("Enter 6 elements for 2X3 matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            printf("matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
     }
     printf("\n matrix elements are:\n");
     for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
     }
     return 0;
}
