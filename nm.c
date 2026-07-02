#include<stdio.h>
int main(){
    int m,n,a[50][50];
    printf("Enter number of rows & columns for Matrix:\n");
    printf("Number of rows: ");
    scanf("%d",&m);
    printf("Number of Columns: ");
    scanf("%d",&n);
    printf("Enter elements of Matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}