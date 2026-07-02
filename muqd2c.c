//write a program to find the value of y using recursive function y=x^n.
#include<stdio.h>
int pwr(int x,int n);
int main(){
    int x,n;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Value of y: %d",pwr(x,n));
    return 0;
}
int pwr(int x,int n){
    if(n==0){
        return 1;
    }
    else{
        return x*pwr(x,n-1);
    }
}