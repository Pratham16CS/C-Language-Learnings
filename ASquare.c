#include<stdio.h>
int main(){
    float side;
    printf("Enter side");
    scanf("%f",&side);
    printf("Side of square is %f\n",side);
    float area = side*side;
    printf("Area of the square is %f\n",area);
    return 0;
}