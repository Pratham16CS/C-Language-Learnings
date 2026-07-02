#include<stdio.h>
#include<string.h>
int ispalindrome(char n[100]);
int main(){
    char name[100];
    printf("Enter a string: ");
    gets(name);
    if(ispalindrome(name)){
        printf("The string is a palindrome.");
    }    
    else{
        printf("The string is not a palindrome.");
    }
    return 0;
}
int ispalindrome(char n[100]){
    int p,i;
    p = strlen(n);
    for(i=0;i<p/2;i++){
        if(n[i] != n[p-i-1]){
            return 0;
        }
    if(i == p/2){
        return 1;
    }
    }
}