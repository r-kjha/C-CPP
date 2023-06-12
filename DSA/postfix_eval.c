/* Program to evaluate a postfix expression */
//Drawback of this program: it will only work for single digit numbers

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
int stack[MAX];
int top=-1;

int pop(){
    int num;
    num=stack[top--];
    return num;
}

void push(int num){
    stack[++top]=num;
}

int operate(int a,int b, char operator){
    int result;
    
    switch (operator)
    {
    case '+':
        result = b + a;
        break;
    
    case '-':
        result = b-a;
        break;

    case '*':
        result = b*a;
        break;

    case '/':
        result = b/a;
        break;
    
    }

    return result;
    
}

int evaluate(char expression[]){

    for(int i=0;expression[i];i++){ //for(i=0;i<length;i++){ or //  expression[i] != '\0' 
        char character = expression[i];

        if(isdigit(character)){
            push(character-'0');
        }else{
            int a=pop();
            int b=pop();
            int val=operate(a,b,character);
            push(val);
        }

    }
    return pop();
}



int main(){
    char expression[MAX]; //85*3+ = 43
    int result;
    printf("Please enter the postfix expression: ");
    scanf("%s",&expression); //format 85*3+
    result=evaluate(expression);
    printf("Result = %d",result);
    return 0;
}