#include <stdio.h>
#include <math.h>
#include "calc.h"


int main()
{
	int P=100,n=12,t=40;
	double r = 0.1, A;
	A = P * pow((1 + (r / n)), (Mul(n,t)));
	printf("�̷���ġ A�� %f", A);
	return 0;
}