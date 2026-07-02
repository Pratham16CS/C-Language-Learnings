#include<stdio.h>
int reverse(int n);
int main(){
    int n;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    printf("Reverse of %d: %d",n,reverse(n));
    return 0;
}
int reverse(int n){
    int r,new;
    new = 0;
    while(n!=0){
        r = n%10;
        new = 10*new + r;
        n = n/10;
    }
    return new;
}