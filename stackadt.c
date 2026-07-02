#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 100
struct stack{
    int data[MAX];
    int top;
}; 
void initialize(struct stack*s){
    s->top = -1;
}
int isFull(struct stack *s){
    if(s->top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *s,int val){
    if(isFull(&*s)){
        printf("Stack Overflow!!\n");
    }
    else{
        s->top++;
        s->data[s->top]=val;
        printf("%d pushed succesfully!!\n",val);
    }
}
void pop(struct stack *s){
    if(isEmpty(&*s)){
        printf("Stack Underflow!!\n");
    }
    else{
        int val;
        val = s->data[s->top];
        printf("%d is popped succesfully!!\n",val);
        s->top--;
    }
}
void peek(struct stack *s){
    if(isEmpty(&*s)){
        printf("Stack is empty!!\n");
    }
    else{
        int val;
        val = s->data[s->top];
        printf("%d is the topmost element in the stack!!\n",s->data[s->top]);
    }
}
void display(struct stack *s){
    if(isEmpty(&*s)){
        printf("Stack is empty!!\n");
    }
    else{
        int i;
        printf("Stack:\n");
        for(i=0;i<=s->top;i++){
            printf("%d\n",s->data[i]);
        }
    }
}
int main(){
    struct stack s;
    initialize(&s);
    while(1){
        int n;
        printf("Your choice codes:\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Enter value to be pushed: ");
            int ele;
            scanf("%d",&ele);
            push(&s,ele);
            break;
            case 2:
            pop(&s);
            break;
            case 3:
            peek(&s);
            break;
            case 4:
            display(&s);
            break;
            case 5:
            printf("Thank You!!!");
            exit(0);
            default:
            printf("Enter correct choice code!!\n");
        }
    }
    return 0;
}