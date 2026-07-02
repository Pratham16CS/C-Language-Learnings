#include<stdio.h>
#include<string.h>
int main (){
    char red[] = "Apple";
    char yellow[] = "Banana";
    printf("%d \n",strcmp(red,yellow));
    strcat(red,yellow);
    puts(red);
    strcpy(red,"mango");
    puts(red);
    printf("%d\n",strlen(red));
    printf("%c",69);
    printf("\n%c",65);
    char name[] = "GOA";
    printf("\n%s",name);
    strlwr(name);
    printf("\n%s",name);
    printf("\n%c",65+32);
    printf("\n%c",'A'+32);
    return 0;
}