#include<stdio.h>
int main(){
    float p;
    printf("enter principal ");
    scanf("%f",&p);
    float r;
    printf("enter rate of interest ");
    scanf("%f",&r);
    float t;
    printf("enter time ");
    scanf("%f",&t);
    float i = (p*r*t)/100;
    printf("simple interest is %f \n",i);
    float a = p+i;
    printf("Total amount is %f \n",a);
    return 0;
}