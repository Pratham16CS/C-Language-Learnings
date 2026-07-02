//program to print a pattern.
#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter a number of rows: ");
    scanf("%d",&n);
    printf("Your Pattern:\n");
    for(i=0;i<n;i++){
        for(k=0;k<i;k++){
                printf(" ");
        }
        for(j=0;j<n-i;j++){
            printf("%c",65+j);
        }
        printf("\n");
    }
    return 0;
}