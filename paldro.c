#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int i,p;
    printf("Enter a string: ");
    gets(name);
    p = strlen(name);
    printf("%d\n",p);
    for(i = 0;i<p/2;i++){
        if(name[i] != name[p-i-1]){
            printf("The string is not a palindrome.");
            break;
        }
    }
    if(i == p/2){
        printf("The string is a palindrome.");
    }
    return 0;
}