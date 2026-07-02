#include<stdio.h>
int main(){
    char name[] = {'P','R','A','T','H','A','M','\0'};
    printf("%c",name[0]);
    printf("%c",name[1]);
    printf("%c",name[2]);
    printf("%c",name[3]);
    printf("%c",name[4]);
    printf("%c",name[5]);
    printf("%c \n",name[6]);
    printf("%s",name);
    return 0;
}