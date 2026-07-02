#include<stdio.h>
int main(){
    char name[100];
    int count=0;
    printf("Enter string: ");
    gets(name);
    while(name[count]!='\0'){
        count++;     
    }
    printf("Reversed string: ");
    for(int i=count-1;i>=0;i--){
        printf("%c",name[i]);
    }
    return 0;
}