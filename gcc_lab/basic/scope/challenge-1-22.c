#include <stdio.h>

#define MAXLINE 300

int getLine(void);
void fold(void);

char line[MAXLINE];
char multiLine[MAXLINE];
int n = 20;


int main() {
	int len;	

	extern char line[]; 
	extern char mutliLine[];

	while ((len < getLine()) > 0 ) {
		fold();
		printf("%s", multiLine);	
	}

	return 0;
}

int getLine() {
	int i, c;
	extern char line[];
	
	for(i=0; (c=getchar()) != EOF && c != '\n'; ++i)
		line[i] =c ;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void fold() {
	int i,j,b,counter;

	extern char line[];
	extern char multiLine[];
	extern int n;	
	
	i = j = counter = 0;
	while (line[i] != '\0') {
		if (counter == n) {
			for (b=j; multiLine[b] != ' ' || multiLine[b] != '\t'; --b) return;
			j = b;
			multiLine[j] = '\n';
			counter = 0;
		}
		else
			multiLine[j] = line[i];
		++i;
		++j;
		++counter;
	}	
}
