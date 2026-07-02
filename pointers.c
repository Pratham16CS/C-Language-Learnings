#include<stdio.h>
int main(){
    int number = 100;
    int *n = &number;
    int digit = *n;
    printf("%d \n",number);
    printf("%d \n",*n);
    printf("%d \n",digit);
    printf("%p \n",n);
    printf("%p \n",&n);
    printf("%p \n",&number);
    printf("%u \n",n);
    printf("%u \n",&n);
    printf("%u \n",&number);
    return 0;       
}