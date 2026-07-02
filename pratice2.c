#include<stdio.h>
int main(){
    float h;
    printf("enter height");
    scanf("%f",&h);
    printf("height is %f\n",h);
    float b;
    printf("enter base");
    scanf("%f",&b);
    printf("base is %f \n",b);
    float area = 0.5*h*b;
    printf("area of triangle is %f \n",area);
    return 0;
}