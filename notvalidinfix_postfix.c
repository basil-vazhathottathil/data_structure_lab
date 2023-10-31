#include <stdio.h>
#include <string.h>
#include <ctype.h>

int top = -1;
char stack[20];
char postfix[20];
char infix[20];

int priority(char operator)
{
    if (operator == '+' || operator == '-')
        return 1;
    else if (operator == '*' || operator == '/')
        return 2;
    return 0;
}

void infix_topostfix(char *infix, char *postfix)
{
    int length = strlen(infix);
    int i = 0;

    for (int j = 0; j < length; j++)
    {
        char term = infix[j];
        if (isalnum(term))
        {
            postfix[i++] = term;
        }
        else if (term == '(')
        {
            stack[++top] = term;
        }
        else if (term == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                postfix[i++] = stack[top--];
            }
            if (top == -1 || stack[top] != '(')
            {
                printf("Invalid expression\n");
                return;
            }
            else
            {
                top--;
            }
        }
        else
        {
            while (top != -1 && priority(term) <= priority(stack[top]))
            {
                postfix[i++] = stack[top--];
            }
            stack[++top] = term;
        }
    }

    while (top != -1)
    {
        if (stack[top] == '(')
        {
            printf("Invalid expression\n");
            return;
        }
        postfix[i++] = stack[top--];
    }

    postfix[i] = '\0';
}

int main(void)
{
    printf("\nEnter the infix expression:\n");
    gets(infix);
    infix_topostfix(infix, postfix);
    printf("\nThe postfix expression is:\n");
    puts(postfix);
    printf("\n");

    return 0;
}
