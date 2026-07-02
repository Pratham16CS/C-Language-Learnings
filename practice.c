#include<stdio.h>
int main(){
    float h;
    printf("enter height ");
    scanf("%f",&h);
    float b;
    printf("enter base ");
    scanf("%f",&b);
    float a = 0.5*h*b;
    printf("area of triangle is %f \n",a);
    return 0;
}