#include <stdio.h>
#include <string.h>

//assignment is to take a sting of 6 paranthesis and output whether or not the paranthesisare "balenced" or not.
//such as "{}" is balenced and "{{" in not

int main () 
{
	
	int MAX = 6;
	char stack[MAX];
	int top = -1;
	char arr2[MAX];
	//char arr1[2] = {'{','}'};
	//int balencePoint = 0;
	
	printf("Enter 6 paranthesis then press ENTER: ");
	
	for (int i = 0; i < 6; i++)
	{
		scanf("%c, ", &(arr2[i]));
	}
	
	for (int i = 0; i < 6; i++)
	{
		printf("%c, ", arr2[i]);
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