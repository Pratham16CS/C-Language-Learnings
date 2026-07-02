//write a program to find tranpose of a square matrix using one matrix only.
#include<stdio.h>
#include<Stdlib.h>
int main(){
    int a[10][10];
    int i,j,m,n;
    printf("Enter number of rows & columns: \n");
    printf("Number of rows: ");
    scanf("%d",&m);
    printf("Number of columns: ");
    scanf("%d",&n);
    if(m!=n){
        printf("The matrix will not be a square matrix.\nTranspose is not possible.");
        exit(0);
    }
    else{
        printf("Matrix is a square matrix.\n");
        printf("Enter elements of matrix: \n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("A[%d][%d]: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }
        printf("Your matrix:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("Transpose of matrix:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ",a[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}