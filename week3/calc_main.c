#include <stdio.h>
#include "calc.h"

int main() {
	int a=6, b=3;
	double r = 5;

	printf("더하기 결과는 : %d\n", Sum(a,b));
	printf("빼기 결과는 : %d\n", Sub(a, b));
	printf("곱하기 결과는 : %d\n", Mul(a, b));
	printf("나누기 결과는 : %d\n", Div(a, b));
	printf("원의 넓이 : %f\n", circ_area(r));
	printf("원의 둘레 : %f\n", circ_circ(r));


}