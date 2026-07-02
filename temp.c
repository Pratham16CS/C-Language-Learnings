#include<stdio.h>
int main(){
    float temp;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&temp);
    printf("Temperature in Farhenheit: %f",(1.8*temp)+32);
    return 0; 
}