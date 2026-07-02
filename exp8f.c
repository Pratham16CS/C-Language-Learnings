#include<stdio.h>
int arm(int a);
int main(){
    int n;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    arm(n);
    return 0;
}
int arm(int n){
    int num,r,new=0;
    num = n;
    while(n!=0){
        r = n%10;
        new = new + (r*r*r);
        n = n/10;
    }
    if(new == num){
        printf("Number is an Armstrong number");
    }
    else{
        printf("Number is not an Armstrong number.");
    }
}
