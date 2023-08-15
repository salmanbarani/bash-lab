#include <stdio.h>
#include <stdbool.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

void main() {
	int c;
	
	bool lastWasSpace = false;	
	while ((c = getchar()) != EOF) {
		if (c == TAB)
			printf("\\t\n");	
		else if (c == BACKSPACE)
			printf("\\b\n");
		else if (c == BACKSLASH)
			printf("\\\n");
	}
}
