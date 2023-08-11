#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

	    int n;
	    scanf("%d", &n);
		
		int boundary = (n*2) - 1;
		int row, col;
		for (int i=0; i < boundary; i++) {
			row = i >= n ? (boundary-1)-i : i;
				
			for (int j = 0; j < boundary; j++) {
		 	if (j<=row) {
				printf("%d", n-j);
			}
			else if (j >= (boundary-row)) {
				int temp = (boundary -1) - j;
				printf("%d", n-temp);

			}	
			 else {
				printf("%d", (n -row));
		       	}

			if (j < boundary) {
				printf(" ");
			}

			}
			printf("\n");
		}		
	 
		      
		      
		    return 0;
}

