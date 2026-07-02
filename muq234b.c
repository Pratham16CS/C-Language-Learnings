//write a program to find the square root of a accepted perfect square number.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i=0;
    printf("Enter a perfect square number: ");
    scanf("%d",&n);
    while(i*i != n){
        if(i>n/2){
            printf("The number is not a perfect square number.");
            exit(0);
        }
        i++;
    }
    printf("The squareroot of %d: %d",n,i);
    return 0;
}