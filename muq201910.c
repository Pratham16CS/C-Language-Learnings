//Program to print a pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Your Pattern:\n");
    int i,j,k,count;
    count = 0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            printf(" ");
        }
        for(k=0;k<=2*i;k++){
            if(k<=i){
                count +=1;
            }
            else{
                count -=1;
            }
            printf("%d ",count);
        }
        printf("\n");
    }
    return 0;
}