#include <stdio.h>
#include "calc.h"

int main() {
	int a=6, b=3;
	double r = 5;

	printf("���ϱ� ����� : %d\n", Sum(a,b));
	printf("���� ����� : %d\n", Sub(a, b));
	printf("���ϱ� ����� : %d\n", Mul(a, b));
	printf("������ ����� : %d\n", Div(a, b));
	printf("���� ���� : %f\n", circ_area(r));
	printf("���� �ѷ� : %f\n", circ_circ(r));


}