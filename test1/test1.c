#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char buf[11] = "helloworld";
	buf[1] = 104;
	printf("the string is : %c\n", buf[1]);
	printf("the string is : %s\n", buf);
}