#include <stdio.h>

#define MAXLINE 300

char line[MAXLINE];
char cleardLine[MAXLINE];


int getLine(void);
void unComment(void);

int main() {
	int len;
	extern char line [];

	while ((len = getLine()) > 0) {
		printf("%s\n", line);
	}

	return 0;
}

char salman[] /* = "Salman is coming home" */;

int getLine(){
	int i,c;

	extern char line[];

	for (i=0; (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void unComment() {
	extern char line [];
	extern char cleardLine [];
	// Fill the code;

}
