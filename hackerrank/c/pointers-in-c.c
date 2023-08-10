#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int diff = *a - *b;
    (*a) = *a + *b;
    (*b)= diff < 0 ? -diff: diff;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
