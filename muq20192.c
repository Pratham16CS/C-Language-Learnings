//write program to peint a pattern 
#include<stdio.h>
int main(){
    int n,count;
    count = 0;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int i,j;
    printf("Your pattern:\n");
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            count = count + 1;
            printf("%d ",count);
        }
        printf("\n");
    }
    return 0;
}