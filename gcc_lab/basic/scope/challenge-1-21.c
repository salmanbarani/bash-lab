#include <stdio.h>

#define MAXLINE 300

int getLine(void);
void entab(void);

int n = 4;
char line[MAXLINE];
char sline[MAXLINE];

int main() {
	
	int len;
	extern char line[];
	//extern char sline[];

	while ((len = getLine()) > 0 ) {
		printf("%s", line);

	}
	return 0;

}


int getLine() {
	int i,c;

	extern char line[];

	for (i=0; (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;

	if (c == '\n'){
		line[i] = c;
		++i;
	} 
	
	line[i] = '\0';
	return i;
}

void entab() {
	int i,j,c;

	extern char line[];
	extern char sline[];
	extern int n;

	i = 0;
	j = 0;
	
	while ((c = line[i]) != '\0') {
		int k;	
		if (c == ' ') {
			for (k=0; ((c =

		}


	}



}
