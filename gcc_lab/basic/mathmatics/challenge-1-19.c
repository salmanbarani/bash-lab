#include <stdio.h>

#define MAXLINE 200

int getLine(char line[]);
void reverse(char line[], char reversedLine[], int size);

int main() {
	int len;
	char line[MAXLINE];
	char reversedLine[MAXLINE];	
	
	while ((len = getLine(line)) > 0) {
		reverse(line, reversedLine, len);	
		printf("%s\n", reversedLine);
	}
	return 0;
}


int getLine(char line[]) {
	int c, i;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	
	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}

void reverse(char line[], char r[], int size) {
	for (int i = 0; i < size; ++i) {
		r[i] = line[(size-1) -i];
	} 
}
