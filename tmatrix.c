#include<stdio.h>
#define N 50
void tm(int a[N][N],int m,int n);
int main(){
    int m,n,a[N][N];
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    printf("Enter elements in matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Your Matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if(m==n){
        printf("Matrix is a Square Matrix.\n");
        tm(a,m,n);
    }
    else{
        printf("Matrix is not a Square Matrix.\n");
        printf("Tranpose of Matrix is not possible.");
    }
    return 0;
}
void tm(int a[N][N],int m,int n){
    printf("Transpose of your matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}