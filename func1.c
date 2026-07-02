#include<stdio.h>
void namaste();
void bonjour();
int main(){
    char n;
    printf("Enter I-Indian & F-French \n");
    printf("Enter your nationality: ");
    scanf("%c",&n);
    if(n=='I'){
        namaste();
    }
    else if(n=='F'){
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("Namaste!!!");
}
void bonjour(){
    printf("Bonjour!!!");
}