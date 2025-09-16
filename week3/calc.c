#define _USE_MATH_DEFINES
#include < stdio.h>
#include <math.h>
int Sum(int a, int b) {
	return a + b;
}
int Sub(int a, int b) {
	return a - b;
}
int Mul(int a, int b) {
	return a * b;
}
int Div(int a, int b) {
	if (b == 0) {
		printf("err: divide by 0\n");
		return 0;
	}
	return a / b;
}

double circ_area(int r) {
	return M_PI * r * r;
}
double circ_circ(int r) {
	return 2 * M_PI * r;
}