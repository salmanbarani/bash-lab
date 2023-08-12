#include <stdio.h>

int main() {
	unsigned int a = 5;

	for (int i = 1; i < 10; i++) {
		printf("Left %d << %d is %d\n", a, i, a << i);
	}

	return 0;
}
