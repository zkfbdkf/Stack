#pragma warning(disable: 4996)
#include <stdio.h>
#define PUSH 1
#define DELETE 2
#define SHOW 3
#define QUIT 4
int Top = 0;

int get_a_cmd()
{
	int n;
	printf("Select Order.\n1.Input number in the Stack.\n2.Delete number from the Stack.\n3.Show numbers in the Stack.\n4.Quit.\n");
	scanf_s("%d", &n);
	return n;
}

int push(int *stack)
{
	if (Top >= 5)//full check
	printf("The Stack is full, no more input.\n");
	else
	{
		printf("Input the number.\n");
		scanf_s("%d", &stack[Top]);
		printf("The number has been input in the Stack.\n");
		Top++;
		return stack[Top];
	}
}


void pop(int *stack)
{
	if (Top <= 0)
	printf("The Stack is empty, no more delete.\n");
	else
	{
		printf("The number has been deleted.\n");
		Top--;
	}
}

void show(int *stack)
{
	int i = 0;
	if (Top <= 0)
	printf("The Stack is empty.\n");
	else
	{
		for (i = 0; i<Top; i++)
		{
			printf("[%d] ", stack[i]);
		}
		printf("<-Top\n");
	}
}

int main()
{
	int cmd;
	int stack[5];
	do
	{
		cmd = get_a_cmd();
		switch (cmd){
			case PUSH: push(stack);
			break;
			case DELETE: pop(stack);
			break;
			case SHOW: show(stack);
			break;
			case QUIT: printf("Quitting the program.\n");
			break;
			default: printf("Input again.\n");
			break;
		}
	} while (cmd != QUIT);

}
