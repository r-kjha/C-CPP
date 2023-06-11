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
    int length,i,result,a,b,val;
    char character;
    length = strlen(expression);

    for(i=0;i<length;i++){
        character = expression[i];

        if(isdigit(character)){
            push(character-'0');
        }else{
            a=pop();
            b=pop();
            val=operate(a,b,character);
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