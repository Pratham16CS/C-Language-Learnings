#include<stdio.h>
void armstrong(int n);
int main(){
    int n;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
void armstrong(int n){
    int new=0,r,num;
    num = n;
    while(n != 0){
        r = n%10;
        new = new + (r*r*r);
        n = n/10;
    }
    if(new==num){
        printf("Your number is an Armstrong number.");
    }
    else{
        printf("Your number is not an Armstrong number.");
    }
 
}