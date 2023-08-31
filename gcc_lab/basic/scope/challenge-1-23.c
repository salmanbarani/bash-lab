#include <stdio.h>

#define MAXLINE 300

char line[MAXLINE];
char clearLine[MAXLINE];


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
