#include <stdio.h>

char uppercase(char symbol)
{
	if (symbol >= 'a' && symbol <= 'z')
	{
		return symbol - 32;
	}
	return -1;
}

int main(void)
{
	char my_string[5];
	printf("Enter the string(5 symbol): ");
	scanf("%s", &my_string);
	printf("-----------\n");
	for (int i = 0; i < 5; i++)
	{

		printf("%c", uppercase(my_string[i]));
	}
	printf("\n-----------");
}