/*
This program evaluates a given prefix expression
by: RKJha
*/


/* Algorithm
write a program to evaluate a given prefix expression 
step 1: take the expression as input
step 2: check if the character is a digit or not from right to left
step 3: if the character is a digit then push it to stack
step 4: if the character is an operator then pop the top two elements from stack
step 5: perform the operation on the two elements
step 6: push the result to stack
step 7: repeat step 2 to 6 until end of expression
step 8: print the result


*/

#include<stdio.h>  // for printf() and scanf() function
#include<stdlib.h> // for exit() function
#include<string.h> // for strlen() function
#include<ctype.h> // for isdigit() function

#define MAX 100 // maximum size of stack

int stack[MAX]; // stack declaration
int top = -1; // top of stack

// forward declaration of functions
void push(int);
int pop(); 
int evaluate(char[]); 
int operation(int, int, char); 

int main() 
{
    char prefix[MAX]; // prefix expression declaration
    int result;  // result variable declaration
    printf("Enter the prefix expression: "); // display message
    scanf("%s", prefix); // read the prefix expression
    result = evaluate(prefix); // evaluate the prefix expression
    printf("Result = %d\n", result); // print the result
    return 0; 
}


int evaluate(char prefix[]) // evaluate function definition
{ 
    int i, op1, op2, len, val;
    char ch;
    len = strlen(prefix); // find the length of prefix expression
    for(i=len-1; i>=0; i--) 
    {
        ch = prefix[i]; // take the character from right to left 

        if(isdigit(ch)) // check if the character is a digit
            push(ch-'0'); // push the digit to stack as integer 
        else
        {
            op1 = pop(); // pop the top element from stack
            op2 = pop(); // pop the top element from stack
            val = operation(op1, op2, ch); // perform the operation
            push(val); // push the result to stack
        }
    }
    return pop(); // return the top element of stack
}

int operation(int op1, int op2, char ch) // operation function definition
{  
    int val; 
    switch(ch)
    {
        case '+':
            val = op1 + op2;
            break;
        case '-':
            val = op1 - op2;
            break;
        case '*':
            val = op1 * op2;
            break;
        case '/':
            val = op1 / op2;
            break;
        case '%':
            val = op1 % op2;
            break;
    }
    return val;
}

void push(int val)
{
    if(top == MAX-1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = val;
    }
}

int pop()
{
    int val;
    if(top == -1)
        printf("Stack Underflow\n");
    else
    {
        val = stack[top];
        top--;
    }
    return val;
}

// Example: 
// Enter the prefix expression: *+45-92
// Result = 63

// Time Complexity: O(n)
// Space Complexity: O(n)
