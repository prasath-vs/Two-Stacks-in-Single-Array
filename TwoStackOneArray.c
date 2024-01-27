#include <stdio.h>
#define SIZE 10

int a[SIZE];
int top1 = -1; 
int top2 = SIZE; 

void push1(int element) 
{
    if (top1 < top2 - 1) 
	{
        a[++top1] = element;
    } 
	else 
	{
        printf("Stack 1 Overflow\n");
    }
}

void push2(int element) 
{
    if (top1 < top2 - 1) 
	{
        a[--top2] = element;
    } 
	else 
	{
        printf("Stack 2 Overflow\n");
    }
}

void pop1() 
{
    if (top1 >= 0) 
	{
        printf("\nDeleted : %d", a[top1--]);
    } 
	else 
	{
        printf("Stack 1 Underflow\n");
    }
}

void pop2() 
{
    if (top2 < SIZE) 
	{
        printf("\nDeleted : %d", a[top2++]);
	
    } 
	else 
	{
        printf("Stack 2 Underflow\n");
    }
}

int main() 
{
	int value, choice;
	while(1)
	{
		printf("\n23MCA0078 || Prasath VS");
		printf("\n\n***** MENU *****\n");
		printf("1. Push to stack 1\n2. Push to stack 2\n3. Pop from stack 1\n4. Pop from stack 2\n5. Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
				printf("Enter the value to be insert: ");
				scanf("%d",&value);
				push1(value);
				break;
			case 2: 
				printf("Enter the value to be insert: ");
				scanf("%d",&value);
				push2(value);
				break;
			case 3:
				pop1();
				break;
			case 4:
				pop2();
				break;
			case 5: 
				exit(0);
			default: 	
				printf("\nWrong selection!!! Try again!!!");
		}
	}
    return 0;
}

