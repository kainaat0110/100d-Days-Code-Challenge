/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50
char stack[size];
char infix[size] , postfix[size];
int top = -1;
int j = 0;
char push(char);
char pop();
int precedence(char infix);
void intopost();
char print();

int main() {
    
    printf("Enter a Infix Expression: ");
    gets(infix);
    
    intopost(infix);
    print();
    return 0;
}
int precedence(char infix){
    switch(infix){
        case '*': 
        case '/':
            return 2;
            break;
        case '+':
        case '-': 
            return 1;
            break;
        default: return 0; break;
    }
}
void intopost(){
    char symbol , next;
    
    for(int i = 0; i < strlen(infix); i++){
        symbol = infix[i];
        switch(symbol){
            case '(': push(symbol);
                    break;
            case ')': while((next = pop()) != '('){
                    postfix[j++] = next;
                    }
                    break;
            case '+':
            case '-':
            case '*':
            case '/':
                if(stack[top] == -1 && precedence(stack[top]) >= precedence(symbol)){
                    postfix[j++] = pop();
                } else {
                    push(symbol);
                }
            default: postfix[j++] = symbol;
        }
    }
    while(stack[top] != -1){
        postfix[j++] = pop();
    } 
}
char push(char symbol){
    top++;
    stack[top] = symbol;
}
char pop(){
    postfix[j++] = stack[top];
    top--;
}
char print(){
    int i = 0;
    while(postfix[i]){
        printf("%c " , postfix[i++]);
    }
}
