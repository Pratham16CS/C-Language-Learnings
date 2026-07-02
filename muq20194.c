//Program to reverse a three digit number using user-defined function.
#include<stdio.h>
void reverse(int n);
int main(){
    int n;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n){
    int r,new,n2;
    new = 0;
    n2 = n;
    while(n!=0){
        r = n%10;
        new = 10*new + r;
        n = n/10;
    }
    printf("Reverse of %d: %d",n2,new);
}