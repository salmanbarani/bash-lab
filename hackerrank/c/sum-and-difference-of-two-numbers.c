#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int int_1, int_2;
    float float_1, float_2;
    
    scanf("%d %d", &int_1, &int_2);
    int sum = int_1 + int_2;
    int difference = int_1 - int_2;
    printf("%d %d\n", sum, difference);
    
    scanf("%f %f", &float_1, &float_2);
    float sum_f = float_1 + float_2;
    float difference_f = float_1 - float_2;
    printf("%.1f %.1f", sum_f, difference_f);
    
    
    
    
    
    return 0;
}
