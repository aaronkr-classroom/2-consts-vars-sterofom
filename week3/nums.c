#include <stdio.h>
#include "calc.h"

int main() {
	int decimal = 42;
	int octal= 052;
	int hex = 0x2A;
	int binary = 0b101010; 

	printf("Decimal: %d\n", decimal);
	printf("Octal: %o (Prefix: 0%o) = %d\n", octal, octal, octal);
	printf("hexadecimal: %x (Prefix: 0x%x) = %d\n",hex,hex,hex);
	printf("binary: 0b101010= %d\n",binary);

	printf("\n -------------------------------------\n");
	printf("|               ~MATH!!~              |");
	printf("\n -------------------------------------\n");
	printf("%o + %x = %d\n", octal, hex, Sum(octal, hex));
	printf("%x - %o = %d\n", hex, octal, Sub(hex, octal));
	printf("%o * %x = %d\n", octal, hex, Mul(octal, hex));
	printf("%x / %o = %d\n", hex, octal, Div(hex, octal));
	printf("������ %x ������: %.5f\n", hex, circ_circ(hex));
	printf("������ %o ����: %.5f\n", octal, circ_area(octal));











	return 0;
}