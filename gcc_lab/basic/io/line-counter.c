#include <stdio.h>

#define EOL '\n'

void main() { 
	int c, nl;
	nl = 0;

	while ( (c = getchar()) != EOF)  {
      		if (c == EOL) {
			++nl;
		}
	}
	printf("%d\n", nl);
}
