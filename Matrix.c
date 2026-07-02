#include<stdio.h>
#define N 50
int main(){
    int a[N][N],b[N][N],c[N][N];
    int m,n,p,q,sum;
    printf("Enter number of rows & columns in Matrix 1: ");
    scanf("%d %d",&m,&n);
    printf("Enter elements in Matrix 1:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    printf("Enter number of rows & columns in matrix 2: ");
    scanf("%d %d",&p,&q);
    printf("Enter elements in matrix 2: \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d ",&b[i][j]);
        }
    }
    printf("Matrix 1: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p){
        printf("Cannot multiply");
    }
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                sum = 0;
                for(int k=0;k<n;k++){
                    sum = sum + a[i][k]*b[i][j];
                }
                c[i][j] = sum;
            }
        }
        printf("Multiplication of Matrix 1 & 2:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                 printf("%d ",c[i][j]);
            }
        printf("\n");
        }
    }
    return 0;
}