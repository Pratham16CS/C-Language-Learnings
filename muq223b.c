//write a program to find the factorial of a given number.
#include<stdio.h>
int main(){
    int n,fact = 1,num;
    printf("Enter a number: ");
    scanf("%d",&n);
    num = n;
    while(n!=0){
        fact = fact*n;
        n--;
    }
    printf("%d! = %d",num,fact);
    return 0;
}