#include <stdio.h>

int main()
{
	printf("Enter your Given Name: ");

	int c;
	c = getchar();
	printf("Hello ");
	
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

	return 0;
}
