// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,n,m;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            if(i==0||k==0){
                m = 1;
            }
            else{
                m = m*(i-k+1)/k;
            }
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}