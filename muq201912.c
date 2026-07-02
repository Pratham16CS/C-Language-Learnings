//Program to print a pattern.
#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Your pattern:\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("%d",n-k);
        }
        printf("\n");
    }
    return 0;
}