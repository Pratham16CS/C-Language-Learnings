//program to print a pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            if(j==i){
                printf("* ");
            }
            else{
                printf("%d ",j+1);
            }
        }
        printf("\n");
    }
    return 0;
}