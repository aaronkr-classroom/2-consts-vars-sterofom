#include <stdio.h>
void main() {
	int won;
	won = 3000;
	printf("제 통장에 %d\\ 있습니다.\n", won);

	const char* easy_won = "1,000,000";
	printf("제 통장에 %s\\ 있습니다.\n", easy_won);
	printf("+500,000\\ 수금\n");
	easy_won = "1,500,000";
	printf("수금해서 %s\\ 있습니다.\n", easy_won);


	float bc = 10.123456789;
	printf("bitcoin 지갑: %.5fB\n",bc);
	bc = bc + 0.34567;
	printf("현재 bitcoin 지갑: %.5fB\n", bc);

	return 0;
}