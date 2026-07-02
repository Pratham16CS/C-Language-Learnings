#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int p,i;
    printf("Enter string: ");
    gets(name);
    p = strlen(name);
    printf("Reverse string: ");
    for(i=0;i<p;i++){
        printf("%c",name[p-i-1]);
    }
    printf("\n");
    for(i=0;i<p/2;i++){
        if(name[i]!=name[p-i-1]){
            printf("Your string is not a Palindrome string.");
            break;
        }
    }
    if(i==p/2){
        printf("Your string is a Palindrome string.");
    }
    return 0;
}