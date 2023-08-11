#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

	    int n;
	    scanf("%d", &n);
		
		int boundary = (n*2) - 1;

		for (int i=0; i < n; i++) {
			for (int j = 0; j < boundary; j++) {
		 	if ( i <= j) {
				printf("%d", (n-j));
			  } 
			 else {
				printf("*");
		       	}

			}
			printf("\n");

		}		
	    printf("%d\n", boundary);		      
	 
		      
		      
		    return 0;
}

