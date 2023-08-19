#include <stdio.h>
#define THRESHOLD 80
#define MAXLINECHAR 1000
#define MAXLINE 10 // maximum lines that can be stored in an arry

int getLine(int line[], lim);

int main() {
	int len;
	int max;	
	char line[MAXLINECHAR];
	char lines[MAXLINE][MAXLINECHAR];
	max = 0;
	i = 0;

	while ((len = getLine(line, MAXLINE)) > 0 || i < 10) {
		if (len > THRESHOLD){
			lines[i] = line;	
			++i;
		}	
	}
		

	return 0;
} 
