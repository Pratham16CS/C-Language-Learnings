#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter number ");
    scanf("%d",&a);
    a%2==0?printf("Even number"):printf("Odd number");
    return 0;
}