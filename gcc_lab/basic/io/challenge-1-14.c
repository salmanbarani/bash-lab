#include <stdio.h>

#define SIZE 26

void main() {
	int c;
	char lchars[SIZE];
	char chars[SIZE];
		
	for (int i = 0; i < SIZE; ++i){
		lchars[i] = 0;
		chars[i] = 'a' + i;
	}
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			continue;
		else
			lchars[c - 'a']++;
	}

	for (int i = 0; i < SIZE; ++i)
		printf("%c: %d\n", chars[i], lchars[i]);	
}
