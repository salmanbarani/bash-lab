#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    char nums[9][20] = {
        "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    
    for (int i = a; i <= b; i++){
        if (i <= 9)
            printf("%s", nums[i-1]);
        else
            printf("%s", (i % 2 == 0)? "even": "odd");
        printf("\n");
    }


    return 0;
}

