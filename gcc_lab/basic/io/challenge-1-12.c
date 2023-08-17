#include <stdio.h>
#include <stdbool.h>

void main() {
	char c;
	bool hasSpace = false;	
	while ((c=getchar()) != EOF) {
		if (c == ' ') {
			hasSpace = true;
		}
		else if (c == '\n')
			hasSpace = false;
		else
			if (hasSpace == false)
				putchar(c);
		
	}

}
