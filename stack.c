#include<stdio.h>
#include<unistd.h>
#define MAX 10
struct stack{
    int a[MAX];
    int top;
};
void initialize(struct stack *s){
    s->top = -1;
}
int isempty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *s){
    if(s->top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *s,int d){
    if(isfull(&(*s))){
        printf("Stack Overflow!!\n");
    }
    else{
        s->top++;
        s->a[s->top] = d;
        printf("%d is pushed successfully!!\n",d);
    }
}
void pop(struct stack *s){
    if(isempty(&(*s))){
        printf("Stack Underflow!!\n");
    }
    else{
        int d = s->a[s->top];
        s->top--;
        printf("%d is popped successfully!!\n",d);
    }
}
void peek(struct stack *s){
    if(isempty(&(*s))){
        printf("Stack is empty!!\n");
    }
    else{
        int d = s->a[s->top];
        printf("Topmost element in stack : %d\n",d);
    }
}
void display(struct stack *s){
    if(isempty(&(*s))){
        printf("Stack is empty!!");
    }
    else{
        printf("Your stack:\n");
        int i;
        for(i=0;i<=s->top;i++){
            printf("%d\n",s->a[i]);
        }
    }
}
int main(){
    struct stack new;
    int c;
    initialize(&new);
    while(1){
        int num;
        printf("\n\t\tCHOICES\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.exit\n");
        printf("\tEnter choice code: ");
        scanf("%d",&c);
        switch(c){
            case 1:
            printf("Enter to be pushed: ");
            scanf("%d",&num);
            push(&new,num);
            break;
            case 2:
            pop(&new);
            break;
            case 3:
            peek(&new);
            break;
            case 4:
            display(&new);
            break;
            case 5:
            printf("Thank YOu!!");
            exit(0);
            break;
            default:
            printf("Enter proper choice code!!\n");
        }
    }
    return 0;
}