#include <stdio.h>

#define MAXLINE 300

int getLine(void);
void detab(void);


char line[MAXLINE];
char sline[MAXLINE];
int n = 4;


int main() {
	int len;	
	extern char line[];
	extern char sline[];	
	
	while((len = getLine()) > 0) {
		detab();
		printf("%s", sline); 
	}

	return 0;

}

int getLine() {
	int i,c;

	extern char line[];

	for (i=0; (c=getchar()) != EOF && c != '\n'; ++i) 
		line[i] = c;		

	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}

void detab() {
	int i, j;
	char c;
	extern char line[];
	extern char sline[];
	extern int n;
	
	i = 0;
	j = 0;	
	while (c = line[i]) {
		if (c == '\t')
			for (int k=0; k < n; ++k){
				sline[j] = ' ';
				++j;	
			}
		else{
			sline[j] = c;
			++j;
		}
		++i;
	}
	
}
