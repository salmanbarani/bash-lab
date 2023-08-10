#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

	    int n;
	    scanf("%d", &n);
		
		int boundary = n - 1;

	    char result[100] = "";
		for (int i=0; i < boundary; i++) {
			for (int j = 0; j < boundary; j++) {
				printf("%d: %d", i, j);

			}

		}		
	    printf("%d\n", boundary);		      
	 
		      
		      
		    return 0;
}

