#include <stdio.h>
#include <stdlib.h>
#include "git.h"

int main()
{
	int a, b, c;
	char* text = "Andrew";
	a = b = 5;
	c = multiplication(a, b);
	printf("Hello Git!\n");
	printf("%d", a + b);
	printf("%d", c);
	printf(text);
	return 0;
}