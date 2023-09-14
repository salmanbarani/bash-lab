#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 300

char line[MAXLINE];

int getLine(void);
void checkRudimentary(int len);


int main() {
	int len;
	extern char line [];

	while ((len = getLine()) > 0) {
		checkRudimentary(len);
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

void checkRudimentary(int len) {
	extern char line[];
	int i, c, parentheses, brackets, braces, singleQuote, doubleQuote;
	i = parentheses = brackets = braces = singleQuote = doubleQuote = 0;	

	while ((c = line[i]) != '\0' || c != '\n' ) {
		if (i >= len)
			break;

		parentheses = c == '(' ? parentheses + 1 : parentheses;
		parentheses = c == ')' ? parentheses - 1 : parentheses;

		brackets = c == '[' ? brackets + 1 : brackets;
		brackets = c == ']' ? brackets - 1 : brackets;

		braces = c == '{' ? braces + 1 : braces;
		braces = c == '}' ? braces - 1 : braces;

		
		singleQuote = c == '\'' ? singleQuote + 1 : singleQuote;

		doubleQuote = c == '\"' ? doubleQuote + 1 : doubleQuote;
		++i;
	}
	
	if (parentheses != 0){
		printf("Parenthese is missing\n");
		return;
	}
		
	if (brackets != 0){
		printf("brackets is missing\n");
		return;
	}

	if (braces != 0){
		printf("braces is missing\n");
		return;
	}

	if (singleQuote % 2 != 0){
		printf("single quote is missing\n");
		return;
	}

	if (doubleQuote % 2 != 0){
		printf("double quote is missing\n");
		return;
	}

}
