#include <stdio.h>
#include <stdbool.h>

int getLine(char line[]);
void cleanString(char uncleanString[], char result[]);


int main() {
	int len;
	
	char line[200];
	len = 0;

	while ((len = getLine(line)) > 0) {
		printf("%s", line);

	}

	return 0;
}

int getLine(char line[]) {
	int i,c;	
	
	for (i=0; (c = getchar())!=EOF && c!='\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;	
}

void cleanString(char s[], char r[]) {
	int i =0;
	bool preWasBadChar = false;


	while (true) {
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'){
			if (!preWasBadChar) {
				r[i] = s[i]
			}
		}


	}		



}
