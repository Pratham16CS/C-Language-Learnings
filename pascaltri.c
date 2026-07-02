#include<stdio.h>
int main(){
    int m,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            if(i==0||k==0){
                m=1;
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
