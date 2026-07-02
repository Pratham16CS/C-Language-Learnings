#include<stdio.h>
int main(){
    int a[50][50],b[50][50],m,n,p,q;
    printf("Enter number of rows & columns for Matrix 1:\n");
    printf("Number of Rows: ");
    scanf("%d",&m);
    printf("Number of Columns: ");
    scanf("%d",&n);
    printf("Enter elements of Matrix 1:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter number of rows & columns for Matrix 2:\n");
    printf("Number of Rows: ");
    scanf("%d",&m);
    printf("Number of Columns: ");
    scanf("%d",&n);
    printf("Enter elements of Matrix 2:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 1:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Addition of matrices: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}