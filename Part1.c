#include <stdio.h>
#include <string.h>

	int MAX = 6;
	char stack[6];
	int top = -1;



	int isEmpty()
	{
		if (top == -1)
			return 1;
		return 0;
	}
	
	int isFull()
	{
		if(top == MAX)
			return 1;
		return 0;			
	}
	
	int peek() 
	{
		if (isEmpty())
			printf("\npeek() could not retrieve, Stack is empty\n");
		else
			return stack[top];
	}
	
	int pop()
	{
		int data;
		if (!isEmpty())
		{
			data = stack[top];
			top = top - 1;
			return data;
		} else {
			printf("pop() could not retrieve, Stack is empty\n");
		}
	}	
	
	int push(int data)
	{
		if(!isFull())
		{
			top = top + 1;
			stack[top] = data;
		} else {
			printf("\n push() Could not retrieve, Stack is full\n");
		}
	}



int main () 
{
	
	char arr1[MAX];
	
	printf("Enter 6 paranthesis then press ENTER: ");
	
	for (int i = 0; i < MAX; i++)
	{
		scanf("%c, ", &(arr1[i]));
		
		if (arr1[i] == '{')
		{
			push(arr1[i]);
		} else
			pop();
	}
	
	
	for (int i = 0; i < MAX; i++)
	{
		printf("%c, ", arr1[i]);
	}
	
	printf("\ntop of stack: %c\nStack: ", peek());
	
	for (int i = 0; i < MAX; i++)
	{
		printf("%d.%c, ", i+1, stack[i]);
	}
	
	

}