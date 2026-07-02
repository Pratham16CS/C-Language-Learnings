#include<stdio.h>
int main(){
    int num,reverse = 0,remainder;
    printf("Enter a five digit number: ");
    scanf("%d",&num);
    while(num != 0){
        remainder = num % 10;
        reverse = reverse*10 + remainder;
        num = num/10;
    }
    printf("Reverse of your number: %d",reverse);
    return 0;
}