//write a program to check whether the entered string is palindrome or not,
#include<stdio.h>
int main(){
    char name[100];
    int i,p=0;
    printf("Enter a word: ");
    gets(name);
    while(name[p] != '\0'){
        p++;
    }
    for(i=0;i<p/2;i++){
        if(name[i] != name[p-i-1]){
            break;
        }
    }
    if(i == p/2){
        printf("Your string is a palindrome.");
    }
    else{
        printf("Your string is not a palindrome.");
    }
    return 0;
}