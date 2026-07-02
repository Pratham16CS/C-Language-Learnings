#include<Stdio.h>
#include<stdlib.h>
int main(){
    int a[10][10],i,j,m,n;
    printf("Enter number of rows and columns: \n");
    printf("Rows = ");
    scanf("%d",&m);
    printf("Columns = ");
    scanf("%d",&n);
    if(m!=n){
        printf("Your matrix will not be a square matrix.\n");
        printf("Transpose of it is not possible.");
        exit(0);
    }
    printf("Your matrix will be a square matrix.\n");
    printf("Enter elements of matrix:\n");
    for(i=0;i<m;i++){
        printf("Row %d:\n",i+1);
        for(j=0;j<n;j++){
            printf("Column %d:\n",j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Your Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of your matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j] != a[j][i]){
                printf("Your matrix is not a symmetric matrix.\n");
                exit(0);
            }
        }
    }
    if(i==m && j==n){
        printf("Your matrix is a symmetric matrix.");
    }
    return 0;
}  