#include <stdio.h>

void main() {
	
	int lwords[10];
	
	for (int i = 0; i < sizeof(lwords); i++)
		lwords[i] = 0;	
	int lword, i, c;
	
	lword, i = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			lwords[i] = lword;
			++i;
			lword = 0;
		}
		else {
			++lword;
		}
	}

	for (int i = 0; i < sizeof(lwords); ++i ) {
		for (int j = 0; j < lwords[i]; ++j)
			putchar('=');
		putchar('\n');	
	}	
}
