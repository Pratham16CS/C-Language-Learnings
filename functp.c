#include<stdio.h>
void prize(float x);
int main(){
    float value;
    printf("Enter the cost: ");
    scanf("%f",&value);
    prize(value);
    printf("The value is %f",value);
    return 0;
}
void prize(float x){
    x = x + (0.18 * x);
    printf("The value is %f \n",x);
}