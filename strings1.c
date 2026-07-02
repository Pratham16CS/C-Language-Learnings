#include<stdio.h>
int main(){
    char name[] = "Pratham Salgaonkar";
    char n2[10];
    printf("%s \n",name);
    char *s = "Hello World";
    puts(s);
    s = "bye";
    puts(s);
    fgets(n2,20,stdin);
    puts(n2);
 return 0;
}