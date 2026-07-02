// Write a program to print pattern.
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(i+j==0 || (i+j)%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}