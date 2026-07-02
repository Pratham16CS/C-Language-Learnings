//factorial of any number from 1 to 30.
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int fact = 1;
    for(int i=n;i>=1;i--){
        fact = fact*i;
        if (i==1){
            printf("%d! = %d",n,fact);
        }
    }
    return 0;
}