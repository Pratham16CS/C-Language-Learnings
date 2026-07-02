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
            if(k==0 || k%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}