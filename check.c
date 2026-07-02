#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter a Alphabet: ");
    scanf("%c",&ch);
    if(isalpha(ch)){
        printf("Good!! you are aware of alphabets.");
    }
    else{
        printf("Sorry!! Go and learn alphabets first.");
    }
    return 0;
}