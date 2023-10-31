#include<stdio.h>
#include<string.h>
#include<ctype.h>

int top=-1;
char stack[20];
char postfix[10];
char infix[10];

void priority(char operator)
	{
		if (operator=='+' || operator=='-')
			return 1;
		if (operator=='*' || operator=='/')
			return 2;
		return 0;
	}	

void infix_topostfix(char infix, char postfix)
	{
		int length= strlen(infix);
		for(int i=0;i<length;i++)
			{
				char term = infix[i];
				if (isalnum(term))
					{postfix[i++] = token;}
				else if(term=='(')
					{stack[top++]=token;}
				else if (term==')')
					{
						while(top!==-1 && stack[top]!=='(')
							{ postfix[i++]=stack[top--];
							  if (top != -1 && stack[top] != '(') {
               						      printf("Invalid expression\n");
                					      return;
           							}
           						  else {
								top--;
							    	}
							}
					}
				 else
				 	{
						while( top!=1 && priority(term)<=priority(stack[top])
							{	
								postfix[i++]=stack[top--];
							}
					}
			}
	}
	
void main
	{
		printf("\nenter the infix expression \n");
		gets(infix);
		infix_topostfix(infix,postfix);
		printf("\nthe postfix is\n");
		puts(postfix);
		printf("\n");
	}
