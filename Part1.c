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
			printf("Cold not retrieve, Stack is empty\n");
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
			printf("Could not retrieve, Stack is empty\n");
		}
	}	
	
	int push(int data)
	{
		if(!isFull())
		{
			top = top + 1;
			stack[top] = data;
		} else {
			printf("Could not retrieve, Stack is full\n");
		}
	}
//assignment is to take a sting of 6 paranthesis and output whether or not the paranthesisare "balenced" or not.
//such as "{}" is balenced and "{{" in not

int main () 
{
	
	char arr1[MAX];
	
	printf("Enter 6 paranthesis then press ENTER: ");
	
	for (int i = 0; i < MAX; i++)
	{
		scanf("%c, ", &(arr1[i]));
	}
	
	
	for (int i = 0; i < MAX; i++)
	{
		printf("%c, ", arr1[i]);
	}
	
	
	
	
	
	
	
	
	//printf("test output: ");
	
	/*for (int i = 0; i < 2; i++){
	printf("%c" ,  arr1[i]);
	} */
	//need to take string of parenthesis to be array we can scan

	//need to have a varible that hold a value, the value changes based on what is read
	//for that we will need to make "{" to be a +1 and "}" to be a -1
	//if the value is not 0 (or whatever our starting point is) then it is un balenced and we state so with printf along with the output
	//if the value is 0 (or whatever we state as starting point) then it is balenced and we printf so along with the output
	// at some point we need to ask the user to enter 6 paranthesis at random and then run the program and output correct result
	
	
	//ok but why do any of the above when we can just use STACK? idk maybe we do both... but prob STACK
	
	

}