#include<stdio.h>
int main(){
    int n,r,m,new = 0;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    m = n;
    while(n!=0){
        r = n%10;
        new = new + (r*r*r);
        n = n/10;
    }
    if(new == m){
        printf("Number is an Armstrong Number.");
    }
    else{
        printf("Number is not an Armstrong Number.");
    }
    return 0;
}