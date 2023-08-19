#include <stdio.h>

float fahrToCelsius(float fahr);

int main() {
	float fahr, celsius;	
	int lower, upper, step;
	
	lower = 0;
	upper = 300;	
	step = 20;


	while (fahr <= upper) {
		celsius = fahrToCelsius(fahr);
		printf("%3.2f %6f\n", fahr, celsius);
		fahr += step;
	}

	return 0;
}

float fahrToCelsius(float fahr) {
	return 5 * (fahr-32) / 9;
}
