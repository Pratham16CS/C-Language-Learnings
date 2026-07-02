#include<stdio.h>
void square(int n);
void _square(int *n);
int main(){
    int number;
    printf("Enter Numbers: ");
    scanf("%d",&number);
    square(number);
    printf("now number is %d \n",number);
    _square(&number);
    printf("now number is %d \n",number);
    return 0;
}

void square(int n){
    n = n*n;
    printf("Square = %d \n",n);
}
void _square(int *n){
    (*n) = (*n)*(*n);
    printf("Square = %d \n",*n);
}
