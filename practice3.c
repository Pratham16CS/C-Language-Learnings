#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("number ");
    scanf("%d",&a);
    int b ;
    printf("power ");
    scanf("%d",&b);
    int power = pow(a,b);
    printf("answer is %d",power);
    return 0;
}