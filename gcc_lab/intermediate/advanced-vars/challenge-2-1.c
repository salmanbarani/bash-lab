#include <stdio.h>
#include <limits.h>
#include <float.h>


int main() {

	printf("charmin:%d charmax:%d\n", CHAR_MIN, CHAR_MAX);
	printf("shortmin:%d shortmax:%d\n", SHRT_MIN, SHRT_MAX);
	printf("intmin:%d intmax:%d\n", INT_MIN, INT_MAX);
	printf("longmin:%ld longmax:%ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned char:%d\n", UCHAR_MAX);
	printf("unsigned short:%d\n", USHRT_MAX);
	printf("unsigned int:%d\n", UINT_MAX);
	printf("unsigned long:%ld\n", ULONG_MAX);

	return 0;
}
