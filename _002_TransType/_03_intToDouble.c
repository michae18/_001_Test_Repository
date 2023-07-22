#include "stdio.h"

void main() {
	double pi = 3.141592;
	int i = pi;//묵시적 형변환

	printf("double = %lf, int = %d\n", pi, i);
}