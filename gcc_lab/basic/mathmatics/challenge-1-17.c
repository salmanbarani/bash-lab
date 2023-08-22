#include <stdio.h>
#define THRESHOLD 80
#define MAXLINE 1000 

int getLine(char line[], int lim);


int main() {
	int len;
	char line[MAXLINE];

	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > THRESHOLD)
			printf("%s\n", line);		
	}
		
	return 0;
} 

int getLine(char s[], int lim) {
	int c, i;
	
	for (i=0; i < lim-1 && (c = getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	
	if (c == '\n') {
		s[i] = c;
		++i;
	}	

	s[i] = '\0';	
	return i;
}
