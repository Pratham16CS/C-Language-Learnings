#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i=0;
    printf("Enter a perfect square number: ");
    scanf("%d",&n);
    while(i*i!=n){
        if(i>n){
            printf("Your number is not a perfect square number.");
            exit(0);
        }
        i++;
    }
    printf("Square root of %d: %d",n,i);
    return 0;
}