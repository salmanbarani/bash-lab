#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 200


int getLine(char line[]);
void cleanString(char uncleanedString[], char result[], size_t size);


int main() {
	int len;
	
	char line[MAXLINE];
	char cleanedLine[MAXLINE];
	len = 0;
	size_t size; // size of filledLine
	while ((len = getLine(line)) > 0) {
		size = sizeof(line);
		cleanString(line, cleanedLine, size);
	
		printf("%s\n", cleanedLine);
	}

	return 0;
}

int getLine(char line[]) {
	int i,c;	
	
	for (i=0; (c = getchar())!=EOF && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = ' ';
		++i;
	}

	line[i] = '\0';
	return i;	
}

void cleanString(char s[], char r[], size_t size) {
	int i, j;
	char c;
	
	j = 0; // result index
	
	for (i = 0; i < size; ++i) {
		c = s[i];
		
		if ( c == ' ' || c == '\t' || c == '\n') {
			if (j == 0)
				continue;
			else if (r[j-1] == ' ' || r[j-1] == '\t' || r[j-1] == '\n')
				continue;
			else {
				r[j] = ' ';
				++j;
			}
		} else {
			r[j] = c;
			++j;
		}

	}



}
