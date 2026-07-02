#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    char name[100];
    char new[100] = "Newton";
    printf("Enter a Alphanumeric character: ");
    scanf("%c",&ch);
    if(isalnum(ch)){
        printf("Your Character is Alphanumeric.\n");
    }
    else{
        printf("Please enter as per instructions.\n");
    }
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Number of letters: %d\n",strlen(name));
    printf("Your new name: %s",strcpy(name,new));
    return 0;
}