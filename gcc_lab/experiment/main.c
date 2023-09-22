#include <stdio.h>
#include <string.h>

char CONS = '\0';
char NULL_CHAR = '\0';
const char c[] = "Salman";

int atoi(char s[]);
int lower(int c);

void main() {
	printf("%c\n", lower('D'));
}

int atoi(char s[])
{
	int i,n;
	n = 0;

	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
	{
		n = 10 * n + (s[i] - '0');
		printf("RESULT:%d\n", n);
	}
	return n;
}

int lower(int c)
{
	if (c >= 'A' && c <= 'Z'){
		printf("A:%d a:%d c:%d a-A:%d %c\n", 'A', 'a', c, 'a' - 'A', 'a' - 'A');
		return c + 'a' - 'A';
	}
	else
		return c;

}
