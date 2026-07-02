#include<stdio.h>
int main(){
    float celcius,farhenheit,kelvin;
    int temp1,temp2;
    printf("Enter 1-celcius,2-farhenheit,3-kelvin \n");
    printf("Enter the assigned temperature unit: ");
    scanf("%d",&temp1);
    printf("Enter the temperature unit need to convert: ");
    scanf("%d",&temp2);
    if(temp1==1 && temp2==2){
        printf("Enter magnitude: ");
        scanf("%f",&celcius);
        printf("The magnitude in farhenheit is: %f \n",(1.8*celcius)+32);
    }
    else if(temp1==1 && temp2==3){
        printf("Enter magnitude: ");
        scanf("%f",&celcius);
        printf("The magnitude in kelvin is: %f \n",celcius+273.15);
    }
    else if(temp1==2 && temp2==1){
        printf("Enter magnitude: ");
        scanf("%f",&farhenheit);
        printf("The magnitude in celcius is: %f \n",(farhenheit-32)/1.8);
    }
    else if(temp1==3 && temp2==1){
        printf("Enter magnitude: ");
        scanf("%f",&kelvin);
        printf("The magnitude in celcius is: %f \n",kelvin-273.15);
    }
    else if(temp1==2 && temp2==3){
        printf("Enter magnitude: ");
        scanf("%f",&farhenheit);
        printf("The magnitude in kelvin is: %f \n",((farhenheit-32)/1.8)+273.15);
    }
    else if(temp1==3 && temp2==2){
        printf("Enter magnitude: ");
        scanf("%f",&kelvin);
        printf("The magnitude in farhenheit is: %f \n",(1.8*(kelvin-273.15)+32));
    }
    else{
        printf("Please follow the instruction \n");
    }
    printf("Thank you!!");
    return 0;
    }