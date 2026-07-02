#include<stdio.h>
int main(){
    float height;
    printf("enter height");
    scanf("%f",&height);
    printf("height is %f \n",height);
    float base = 3*height;
    printf("base is %f \n",base);
    float area = 0.5*height*base;
    printf("area of triangle is %f \n",area);
    return 0;
}