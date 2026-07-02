#include<stdio.h>
int main(){
    int m,n,r,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    m = n;
    while(n!=0){
        r = n%10;
        rev = rev*10 + r;
        n = n/10;   
    }
    if(m == rev){
        printf("The number is a Palindrome number.");
    }
    else{
        printf("The number is not a Palindrome number.");
    }
    return 0;
}