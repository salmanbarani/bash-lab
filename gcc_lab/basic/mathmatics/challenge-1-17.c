#include <stdio.h>
#define THRESHOLD 80
#define MAXLINECHAR 1000
#define MAXLINE 10 // maximum lines that can be stored in an arry

int getLine(char line[], int lim);


int main() {
	int len;
	int max;	
	char line[MAXLINECHAR];
	max = 0;

	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > THRESHOLD)
			printf("%s\n", line);		
		else
			printf("less %d\n", len);
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
