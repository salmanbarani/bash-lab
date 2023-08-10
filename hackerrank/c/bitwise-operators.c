#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int max(int a, int b) {
    if (a >= b)
        return a;
    return b;
}

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and, or, xor; and = or = xor = 0;
  for (int i=1; i <= n-1; ++i) {
     for (int j= i+1; j <=n; ++j) {
        and = (i&j) < k ? max(and, i&j)    : and;
        or  = (i|j) < k ? max(or, i|j) : or;
        xor = (i^j) < k ? max(xor, i^j): xor;
    } 
  }
    printf("%d\n%d\n%d\n", and, or, xor);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

