#include <stdio.h>

#define BLANK ' '
#define TAB   '\t'
#define NEWLINE '\n'

void main() { 
	int c;
	int blank, tab, newLine;

	while ((c = getchar()) != EOF ) { 
      		if (c == BLANK)
		       ++blank;
		else if (c == TAB)
			++tab;
		else if (c == NEWLINE)
			++newLine;		
	}   

	printf("blank:%d, tab:%d, newline:%d\n", blank, tab, newLine);	

}
