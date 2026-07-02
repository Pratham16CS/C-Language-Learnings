#include<stdio.h>
int main(){
    char name[20];
    name[0] = 'b';
    name[1] = 'a';
    name[2] = 'c';
    name[3] = 'k';
    name[4] = '\0';
    printf("%s",name);
    return 0;
}