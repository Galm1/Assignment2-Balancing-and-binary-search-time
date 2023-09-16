#include <stdio.h>
#include <stdbool.h>

#define MAX 6

char stack[MAX];
int top = -1;

bool isEmpty() 
{
    return top == -1;
}

bool isFull() 
{
    return top == MAX - 1;
}

char peek() 
{
    if (!isEmpty())
	{
        return stack[top];
    } else {
        printf("peek() could not retrieve, Stack is empty\n");
        return '\0'; // Return null for an empty stack
    }
}

char pop() 
{
    if (!isEmpty()) 
	{
        return stack[top--];
    } else {
        printf("pop() could not retrieve, Stack is empty\n");
        return '\0'; // Return null for an an empty stack
    }
}

void push(char data) 
{
    if (!isFull()) 
	{
        stack[++top] = data;
    } else {
        printf("\npush() could not retrieve, Stack is full\n");
    }
}





int main() {
    char arr1[MAX];

    printf("Enter 6 parentheses then press ENTER: ");

    for (int i = 0; i < MAX; i++) {
        scanf(" %c", &(arr1[i])); 
    }

    for (int i = 0; i < MAX; i++) {
        if (arr1[i] == '{') {
            push(arr1[i]);
        } else if (arr1[i] == '}') {
            if (isEmpty()) {
                printf("Invalid Parenthesis Expression\n");
                return 1;
            }
            pop();
        } else {
            printf("Invalid input\n");
            return 1;
        }
    }

    if (isEmpty()) {
        printf("Valid Parenthesis Expression\n");
    } else {
        printf("Invalid Parenthesis Expression\n");
    }

    return 0;
}
