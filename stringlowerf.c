//A Program to convert UPPER CASE STRING To lower case string using function.
#include<Stdio.h>
void strlower(char a[20]);
int main(){
    char name[20];
    printf("Enter a string in upper case: ");
    gets(name);
    printf("String in upper case = %s\n",name);
    strlower(name);
    return 0;
}
void strlower(char a[20]){
    int i,count = 0;
    while(a[count]!='\0'){
        count = count + 1;
    }
    for(i=0;i<count;i++){
        a[i] = a[i] + 32;
    }
    printf("String in lower case = ");
    for(i=0;i<count;i++){
        printf("%c",a[i]);
    }
}