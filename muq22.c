// Write program to find the sum of elements on,above and below pricipal diagonal of a square matrix.
#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter number of rows & columns of a square matrix: ");
    scanf("%d",&m);
    n = m;
    int a[m][n];
    printf("Enter elements of matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Square matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int sod=0,sad=0,sbd=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                sod = sod+a[i][j];
            }
            else if(i<j){
                sad = sad + a[i][j];
            }
            else{
                sbd = sbd + a[i][j];
            }
        }
    }
    printf("Sum of elements above principal diagonal: %d\n",sad);
    printf("Sum of elements on principal diagonal: %d\n",sod);
    printf("Sum of elements below principal diagonal: %d\n",sbd);
    return 0;
} 