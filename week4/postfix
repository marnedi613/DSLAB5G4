#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int st[], int val);
int pop(int st[]);
int evaluatePostfixExp(char exp[]);

int main()
{
    int val;
    char exp[100];

    printf("Enter a postfix expression : ");
    scanf("%s", exp);

    val = evaluatePostfixExp(exp);
    printf("Result of postfix expression = %d\n", val);

    return 0;
}


void push(int st[], int val)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        st[top] = val;
    }
}


int pop(int st[])
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
        int val = st[top];
        top--;
        return val;
    }
}


int evaluatePostfixExp(char exp[])
{
    int i = 0;
    char ch;
    int val1, val2, result;

    while ((ch = exp[i]) != '\0')
    {
        if (isdigit(ch))
        {
            push(stack, ch - '0'); 
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            val2 = pop(stack);
            val1 = pop(stack);

            switch (ch)
            {
            case '+':
                result = val1 + val2;
                break;
            case '-':
                result = val1 - val2;
                break;
            case '*':
                result = val1 * val2;
                break;
            case '/':
                result = val1 / val2;
                break;
            }
            push(stack, result);
        }
        else
        {
            printf("Invalid character in expression: %c\n", ch);
            return -1;
        }
        i++;
    }

    return pop(stack);
}
