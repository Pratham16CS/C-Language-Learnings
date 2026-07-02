#include<stdio.h>
int countnum(char array[]);
int main(){
    char name[100];
    fgets(name,100,stdin);
    countnum(name);
    printf("%d",countnum(name));
    return 0;
}

int countnum(char array[]){
    int count = 0;
    for(int i=0;array[i]!='\0';i++){
        if(array[i] !=' '){
            count ++;
        }
        else{
            count=count+0;
        }
        printf("%d %d\n",i,count);
        
    }
    return count-1;
}
