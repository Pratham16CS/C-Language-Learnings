#include <stdio.h>
int main(){
    int i = 0,count = 0;
    char name[10];
    printf("Enter a string: ");
    gets(name);
    while(name[count]!='\0'){
        count++;
    }
    printf("string length = %d",count);
    return 0;
}