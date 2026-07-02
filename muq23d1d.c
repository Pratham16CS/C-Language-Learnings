//write a program to print the number pattern of rows given by the user.
#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Your pattern:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=i+1;k>0;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
} 