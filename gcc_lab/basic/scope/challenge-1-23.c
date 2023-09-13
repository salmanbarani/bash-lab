#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 300

char line[MAXLINE];
char cleardLine[MAXLINE];


int getLine(void);
void unComment(int len);

int main() {
	int len;
	extern char line [];
	extern char cleardLine [];

	while ((len = getLine()) > 0) {
		unComment(len);
		printf("%s\n", cleardLine);
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

void unComment(int len) {
	extern char line [];
	extern char cleardLine [];

	bool isComment, isMultiLineComment;
	int i, j, c, nextC;		
	
	isComment = isMultiLineComment = false;
	i = j = 0;	

	while ((c=line[i]) != '\n' || c != '\0'){
		printf("i=%d j=%c\n",i,c);	
		nextC = line[i+1];
	
		if (i >= len)
			break;
	
		if (c == '/' && (nextC == '/' || nextC == '*')){
			isComment = true;
			isMultiLineComment = nextC == '*' ? true : false;
		}
		else if (isComment && (c == '*' && nextC == '/')) {
			if (isMultiLineComment) {	
				isComment = false;	
				isMultiLineComment = false;
				i += 2;
			}
		}
		if (!isComment){ 	
			cleardLine[j] = line[i];
			++j;
		}
		++i;
	}

}
