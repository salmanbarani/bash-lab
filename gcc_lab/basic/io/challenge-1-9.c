#include <stdio.h>
#include <stdbool.h>

#define SPACE ' '

void main() {
	int c;
	
	bool lastWasSpace = false;	
	while ((c = getchar()) != EOF) {
		if (c == SPACE)	
			if(lastWasSpace)
				continue;
			else		
				lastWasSpace = true;
		else
			lastWasSpace = false;
		putchar(c); // actual printing
	}
}
