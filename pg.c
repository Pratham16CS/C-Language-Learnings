#include<stdio.h>
#include<math.h>
int main(){
    float a;
    printf("side 1 = ");
    scanf("%f",&a);
    float b;
    printf("side 2 = ");
    scanf("%f",&b);
    float c = (a*a)+(b*b);
    float d = pow(c,0.5);
    printf("Hypotenuese of a triangle is %f \n",d);
    return 0;
}